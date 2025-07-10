t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    answer = 0-sum(a)
    print(answer)
