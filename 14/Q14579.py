def main():
    a, b = map(int, input().split())
    acc = 0
    res = 1

    for i in range(1, a):
        acc += i

    for i in range(a, b + 1):
        acc += i
        res *= acc % 14579
        res %= 14579

    print(res)

if __name__ == '__main__':
    main()