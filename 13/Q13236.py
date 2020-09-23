def main():
    n = int(input())
    res = [n]

    while n != 1:
        n = n * 3 + 1 if n & 1 else n // 2

        res.append(n)

    print(*res)

if __name__ == '__main__':
    main()