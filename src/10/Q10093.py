def main():
    a, b = map(int, input().split())

    if a > b:
        a, b = b, a

    print(0 if a == b else b - a - 1)
    print(*range(a + 1, b))

if __name__ == '__main__':
    main()
