def main():
    a, d, k = map(int, input().split())

    print('X' if (k - a) % d or (k - a) // d < 0 else (k - a) // d + 1)

if __name__ == '__main__':
    main()