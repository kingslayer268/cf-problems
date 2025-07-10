t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    x = input()
    s = input()
    maxstr = x*m
    if s in maxstr:
        state = ""
        for i in range(m):
            state += max(x, state)
            if s in state:
                print(i)
                break
    else:
        print(-1)
