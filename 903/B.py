t = int(input())
for _ in range(t):
    threads = list(map(int, input().split()))
    check = True
    last_element = None
    for i in threads:
        if last_element == None:
            last_element = i
        elif last_element == i:
            pass
        else:
            check = False
            continue
    if check:
        possible = True
        print("YES")
        continue
    possible = False
    for _ in range(3):
        to_cut = max(threads)
        cut_by = min(threads)
        threads.remove(to_cut)
        threads.append(to_cut-cut_by)
        threads.append(cut_by)
        check = True
        last_element = None
        for i in threads:
            if last_element == None:
                last_element = i
            elif last_element == i:
                pass
            else:
                check = False
                continue
        if check:
            possible = True
            print("YES")
            break
        
    
    if not(possible):
        print("NO")
