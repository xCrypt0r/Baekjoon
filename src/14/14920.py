def main():
    c = int(input())
    n = 1

    while c != 1:
        c = c * 3 + 1 if c & 1 else c // 2
        n += 1

    print(n)

if __name__ == '__main__':
    main()
