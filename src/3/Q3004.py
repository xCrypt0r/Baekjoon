def main():
    pieces = 2
    add = 2

    for i in range(1, int(input())):
        pieces += add

        if i % 2 == 0:
            add += 1

    print(pieces)

if __name__ == '__main__':
    main()
