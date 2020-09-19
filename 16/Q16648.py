def main():
    t, p = map(int, input().split())

    if p >= 20:
        s = (100 - p) / t

        print((p - 20) / s + 20 / (s / 2))
    else:
        s = (80 + (20 - p) * 2) / t

        print(p / (s / 2))

if __name__ == '__main__':
    main()