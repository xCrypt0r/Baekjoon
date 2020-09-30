def main():
    N = int(input())
    elapsed = 0
    num = 1

    while N > 0:
        if N < num:
            num = 1

        N -= num
        num += 1
        elapsed += 1

    print(elapsed)

if __name__ == '__main__':
    main()