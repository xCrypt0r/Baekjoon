def main():
    while True:
        l, w, a = map(int, input().split())

        if l == w == a == 0:
            break

        if l == 0: l = a // w
        elif w == 0: w = a // l
        elif a == 0: a = l * w

        print(f'{l} {w} {a}')

if __name__ == '__main__':
    main()
