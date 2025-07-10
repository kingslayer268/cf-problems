t = int(input())
for _ in range(t):
    x, k = map(int, input().split())
    x_str = str(x)
    l = x
    r = x+100
    ans = x
    for i in range(l, r):
        sum = 0
        for j in str(i):
            sum += int(j)

        if sum % k == 0:
            ans = i
            break
    print(ans)
    
