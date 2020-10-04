def main():
    T = int(input())
    res = 0
    count = 0

    while T > 0:
        res += T % 9 * (10 ** count)
        T //= 9
        count += 1

    print(res)

if __name__ == '__main__':
    main()