t = int(input())
for _ in range(t):
    n, p = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    ab = [[a[i], b[i]] for i in range(n)]
    ab = sorted(ab, key=lambda x:x[1])
    cost = p
    current_index = 0
    n_remaining = n-1
    while n_remaining > 0:
        if ab[current_index][1] >= p:
            cost += n_remaining*p
            break
        else:
            if ab[current_index][0] <= n_remaining:
                cost += ab[current_index][1]*ab[current_index][0]
                n_remaining -= ab[current_index][0]
                current_index += 1
            else:
                cost += n_remaining * ab[current_index][1]
                n_remaining = 0
    print(cost)
