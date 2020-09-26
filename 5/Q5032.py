def main():
    e, f, c = map(int, input().split())
    e += f
    drink = 0

    while e >= c:
        drink += e // c
        e = e // c + e % c

    print(drink)

if __name__ == '__main__':
    main()