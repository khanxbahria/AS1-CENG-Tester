
import argparse
import subprocess
from pathlib import Path
import sys
import os
from .progress_bar import printProgressBar
WINDOW_MAX_CASES = 200
BROWSER_MAX_CASES = 200

ARGS = None

# Stupid Windows Stuff
if os.name == "nt":
    os.system("")  # enables ansi escape characters in terminal
    from ctypes import windll #for tkinter text scaling
    windll.shcore.SetProcessDpiAwareness(1)

class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKCYAN = '\033[96m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'

class CommandException(Exception):
    pass

class CompileException(CommandException):
    pass

class RunException(Exception):
    pass

def write_f(data, file_name):
    with open(file_name, 'w') as f:
        f.write(data)

def read_f(file_name):
    with open(file_name) as f:
        return f.read()


def v_print(msg=""):
    if ARGS.verbose:
        print(msg)

def run_command(command):
    r = subprocess.run(command.split(), capture_output=True, text=True)
    return r

def compile(num):
    test_cases_dir = Path(f"cases/{ARGS.program}")
    inputf = str(test_cases_dir / f"{num}.cpp")
    command = ARGS.compiler_command + f" {inputf} -o {num}"
    
    v_print(f"Compiling {num}.cpp")
    r = run_command(command)
    if r.stderr:
        raise CompileException(r.stderr)

def run_test_case(num):
    command = f"./{num}"
    r = run_command(command)
    if os.name == "nt":
        os.remove(f'{num}.exe')
    else:
        os.remove(f'{num}')
    if r.stderr:
        raise RunException(Exception)
    return r.stdout

def check_compiler_exists():
    r = run_command(ARGS.compiler_command.split()[0] + " --version")
    if r.stderr:
        return False
    return True

def check_code_exists():
    your_code_files = Path('your_code').glob('*.h')
    if not len(list(your_code_files)):
        return False
    return True

def launch_diff(p1, p2):
    v_print("Launching diff..")
    sys.path.append('CENG_tester/pydiff')
    sys.argv = ['', '-p', str(p1), str(p2)]
    try:
        import pydiff
    except ModuleNotFoundError:
        print("Failed to launch diff tool")
        print("Tkinter not found. Please install Tkinter or try running with --diff (-d) flag disabled.")
    except Exception as e:
        pass
def test_case():
    pass

def test_program(program):
    passed = 0
    total = len(ARGS.cases)
    failed = 0
    color = bcolors.OKBLUE
    bar = ''

    if not check_compiler_exists():
        print("Compiler not found.")
        sys.exit()
    
    if not check_code_exists():
        print("Please copy your C++ files to 'your_code' folder")
        sys.exit()

    test_cases_dir = Path(f"cases/{ARGS.program}")
    expected_output_dir = Path(f"expected_output/{ARGS.program}")
    your_output_dir = Path(f"your_output/{ARGS.program}")

    # delete old output files
    [f.unlink() for f in your_output_dir.glob("*.txt") if f.is_file()]

    test_cases_dir.mkdir(parents=True, exist_ok=True)
    expected_output_dir.mkdir(parents=True, exist_ok=True)
    your_output_dir.mkdir(parents=True, exist_ok=True)


    v_print(f"Using compiler with flags: {ARGS.compiler_command}")
    v_print()
    v_print(f"Test cases directory {test_cases_dir}")
    v_print(f"Expected Output directory {expected_output_dir}")
    v_print(f"Your Output directory {your_output_dir}")
    v_print(f"Diff Output directory {your_output_dir}")
    v_print()
    v_print(f"Testing {program}")
    v_print(f"Total number of test cases: {total}")
    v_print("Starting...")
    v_print()

    for x in ARGS.cases:
        your_outf = your_output_dir / f"{x}.txt"
        expected_outf = expected_output_dir / f"{x}.txt"
        try:
            compile(x)
            your_output = run_test_case(x)
        except CompileException as e:
            color = bcolors.FAIL
            v_print(f"{color}Compilation error: {e}{bcolors.ENDC}")
            your_output=str(e)
            failed += 1
        except RunException as e:
            your_output=str(e)
            color = bcolors.FAIL
            v_print(f"{color}Runtime error:")
            v_print(e)
            v_print(bcolors.ENDC)
            failed += 1

        expected_output = read_f(expected_outf)
        if(expected_output == your_output):
            passed+=1
            color = bcolors.OKGREEN
            v_print(f"{color}Test case {x} passed{bcolors.ENDC}")
        else:
            failed+=1
            color = bcolors.FAIL
            v_print(f"{color}Test case {x} failed{bcolors.ENDC}")
 
        v_print(f"{color}Your output")
        v_print("-----------")
        v_print(your_output)
        v_print(bcolors.ENDC)

        v_print(f"{bcolors.OKGREEN}Expected Output")
        v_print("---------------")
        v_print(expected_output)
        v_print(bcolors.ENDC)
        
        your_outf.write_text(your_output)
        print(f"\r\r{passed+failed}/{total} | {bcolors.OKGREEN}{passed} {bcolors.FAIL}{failed}{bcolors.ENDC}", end="")
        bar = printProgressBar(iteration=passed+failed, 
                         total=total,
                         decimals=2,
                         prevBar=bar,
                         fill=f'{color}█{bcolors.ENDC}',
                         emptyFill=f'{color}-{bcolors.ENDC}',
                        )


    v_print("")
    v_print("Finished...")

    print(f"{passed}/{total} cases passed")
    print(f"Your score: {passed/total * 100:.2f}%")
    
    if ARGS.diff:
        launch_diff(your_output_dir, expected_output_dir)

    
def run_ceng_tester():
    global ARGS
    parser = argparse.ArgumentParser(
                    prog =        'C++ Assignment Tester',
                    description = 'A script that will compile and run C++ test'
                                  ' cases and test against the given set of expected outputs',
                                  )
    parser.add_argument('-p', '--program', choices=['window', 'browser'], required=True, 
                        help = 'The program to be tested')
    parser.add_argument('-v', '--verbose', action='store_true', default=False,
                        help = 'Enables full logging')
    parser.add_argument('-c', '--cases', type=list, metavar='CASE#',
                        help = 'Specific case#(s) to be tested. Can be multiple space separated values.')
    parser.add_argument('-cc', '--compiler-command', default='g++')
    #parser.add_argument('-s', '--save-all', action='store_true', default=False,
    #                    help = 'Saves the given output of your code for every test case to the file. Otherwise, only output of failed test cases are saved.')
    parser.add_argument('-d', '--diff', action='store_true', default=False,
                        help = 'Display diff between Given Output and Expected Output. Note: Requires Tkinter')
    ARGS = parser.parse_args()


    
    if not ARGS.cases:
        max_cases = BROWSER_MAX_CASES if ARGS.program == "browser" else WINDOW_MAX_CASES
        ARGS.cases = range(1, max_cases+1)

    test_program(ARGS.program) 
if __name__ == "__main__":

    run_ceng_tester()
