def main():
    while True:
        a, b, c, d = map(int, input().split())

        if all(v == 0 for v in [a, b, c, d]):
            break

        print(f'{c - b} {d - a}')

if __name__ == '__main__':
    main()
