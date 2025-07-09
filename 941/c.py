t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    if 1 not in a:
        print("Alice")
        continue
    #alice = +1, bob = -1
    turn = 1
    while 1 in a:
        a = [i-1 for i in a]
        turn *= -1
    
    if turn == 1:
        print("Alice")
    else:
        print("Bob")
