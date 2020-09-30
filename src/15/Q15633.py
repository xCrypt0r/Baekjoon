def main():
    n = int(input())
    res = n

    for i in range(1, n):
        if n % i == 0:
            res += i

    print(res * 5 - 24)

if __name__ == '__main__':
    main()