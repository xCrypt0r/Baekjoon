def Rev(x):
    return int(str(x)[::-1])

def main():
    X, Y = map(int, input().split())

    print(Rev((Rev(X)) + Rev(Y)))

if __name__ == '__main__':
    main()
