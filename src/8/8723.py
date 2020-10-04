def main():
    sides = [int(x) for x in input().split()]

    sides.sort()

    print(2 if sides[0] == sides[1] == sides[2] else (1 if sides[0] ** 2 + sides[1] ** 2 == sides[2] ** 2 else 0))

if __name__ == '__main__':
    main()