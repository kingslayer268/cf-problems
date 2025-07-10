no_cases = int(input(""))
all_cases = []
for i in range(no_cases):
    no_inputs = int(input(""))
    numbers = input("")
    all_cases.append(numbers.split())

for i in all_cases:


    i[i.index(min(i))] = int(min(i)) + 1
    product = 1
    for j in i:
        product = product*int(j)
    print(product)
    product = 1

