no_cases = int(input(""))
test_cases = []
for i in range(no_cases):
    test_case = input("")
    test_cases.append(test_case)
def check_swap(test_case, target='abc'):
    if test_case == target:
        print("Yes")
    elif test_case[0] == target[0] and (test_case[1] == target[2] or test_case[2] == target[1]):
        print("Yes")
    elif test_case[1] == target[1] and (test_case[0] == target[2] or test_case[2] == target[0]):
        print("Yes")
    elif test_case[2] == target[2] and (test_case[0] == target[1]):
        print("Yes")
    else: 
        print("No")


for test in test_cases:
    check_swap(test)
