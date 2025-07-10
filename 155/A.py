for i in range(int(input())):
    first_athelete = []
    desired_weight = 0
    not_possible = False
    for j in range(int(input())):
        strength, endurance = map(int, input().split())
        if j == 0:
            first_athelete.append((strength, endurance))
            desired_weight = strength
        elif endurance >= first_athelete[0][1]:
            if desired_weight > strength:
                continue
            elif strength >= first_athelete[0][0]:
                not_possible = True
            elif strength < first_athelete[0][1]:
                desired_weight = strength + 1
    if not_possible:    
        print(-1)
    else:
        print(desired_weight)
    
