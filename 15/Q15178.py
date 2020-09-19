def main():
    for _ in range(int(input())):
        a, b, c = map(int, input().split())

        if sum([a, b, c]) != 180:
            print(f'{a} {b} {c} Check')
        else:
            print(f'{a} {b} {c} Seems OK')

if __name__ == '__main__':
    main()
