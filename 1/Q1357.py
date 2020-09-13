def Rev(x):
    return int(str(x)[::-1])

X, Y = map(int, input().split())

print(Rev((Rev(X)) + Rev(Y)))
