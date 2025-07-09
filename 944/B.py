def check(string):
    s = []
    for i in range(0, len(string)):
        if string[i] != string[0]:
            last = s[i-1]
            s[i-1] = string[i]
            s.append(last)
            for i in range(i+1, len(string)):
                s.append(string[i])
            final = "".join(s)
            return f"YES\n{final}"
        s.append(string[i])
    return "NO"
t = int(input())
for i in range(0, t):
    s = input()
    print(check(s))

    