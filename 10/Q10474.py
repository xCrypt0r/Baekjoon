def main():
    while True:
        a, b = map(int, input().split())

        if a == b == 0:
            break

        c = a // b

        print(f'{c} {a - b * c} / {b}')

if __name__ == '__main__':
    main()
