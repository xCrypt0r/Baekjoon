def main():
    x, k = map(int, input().split())

    if k * 7 <= x: v = k * 7000
    elif k * 3.5 <= x: v = k * 3500
    elif k * 1.75 <= x: v = k * 1750
    else: v = 0

    print(v)

if __name__ == '__main__':
    main()
