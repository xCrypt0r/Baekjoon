def main():
    for _ in range(int(input())):
        for _ in range(int(input())):
            a, b = map(int, input().split())

            print(f'{a + b} {a * b}')

if __name__ == '__main__':
    main()
