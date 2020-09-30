def main():
    while True:
        a, b, c = map(int, input().split())

        if a == b == c == 0:
            break

        if b * 2 == a + c:
            print(f'AP {c + (c - b)}')
        else:
            print(f'GP {c * (c // b)}')

if __name__ == '__main__':
    main()