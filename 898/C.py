no_cases = int(input(""))
test_cases = []
for _ in range(no_cases):
    test_case = ""
    for _  in range(10):
        test_case_part = input("")
        test_case += test_case_part
    test_cases.append(test_case)
def convert_to_points(location):
    if location > 50:
        location = 100-location+1
    if location%10 == 0:
        return 1
    elif location%10 <= 5:
        return min(location%10, (location//10)+1)
    else:
        return min(abs(location%10-11), (location//10)+1)
 
for test_case in test_cases:
    score = 0
    for location,box in enumerate(test_case):
        if box == "X":
            score += convert_to_points(location+1)
    print(score)
