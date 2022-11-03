# remove last 3 lines

def correct_each(num):
    with open(f'{num}.txt', 'r') as f:
        data = f.readlines()
    with open(f'{num}.txt', 'w') as f:
        f.writelines(data[:-3])

for x in range(1, 201):
    correct_each(x)
