import functools
cases = int(input(""))
test_cases = []
for i in range(cases):
    elem = int(input(""))
    test_cases.append(elem)

def getSum(num):
    num2 = 0
    for i in str(num):
        num2 += int(i)
    return num2

@functools.lru_cache(maxsize=None)
def gcdSum(num1, num2):
    if (num2 == 0):
        return num1
    return gcdSum(num2, num1%num2)


@functools.lru_cache(maxsize=None)
def final(n):
    num2 = getSum(n)
    if gcdSum(n, num2) == 1:
        return final(n+1)
    else:
        return n


for i in test_cases:
    print(final(i))
 
