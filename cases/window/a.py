def correct_each(num):
    with open(f'{num}.cpp', 'r') as f:
        data = f.read()
    data2=""
    for line in data.split("\n"):
        if line.startswith("#inc"):
            continue
        if line.startswith("long long"):
            continue
        if "llocated" in line:
            continue
        if "std::" in line:
            continue
        if "line" in line:
            continue
        data2+=line+"\n"
    data2= (
            '#include "../../your_code/Window.cpp"\n'
            '#include "../../your_code/Browser.cpp"\n'
            '#include "../../your_code/LinkedList.h"\n'
           ) + data2
    if data2[-2:] == ";\n":
        data2 = data2[:-2]
    with open(f'{num}.cpp', 'w') as f:
        f.write(data2)

for x in range(1, 201):
    correct_each(x)
