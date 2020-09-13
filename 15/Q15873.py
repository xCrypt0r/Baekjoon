s = input()
length = len(s)
res = 0

if length == 2:
    res = sum(map(int, [s[0], s[1]]))
elif length == 3:
    if int(s[-1]) == 0:
        res = int(s[0]) + 10
    else:
        res = int(s[-1]) + 10
else:
    res = 20

print(res)
