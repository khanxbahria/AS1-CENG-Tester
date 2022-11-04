# remove last 3 lines
import os

def correct_each(num):
    with open(f'{num}.txt', 'r') as f:
        data = f.readlines()
    with open(f'{num}.txt', 'w') as f:
        f.writelines(data[:-3])

for x in range(1, 201):
    os.rename(f'output{x}.txt', f'{x}.txt')
