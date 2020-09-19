def main():
    n, s = map(int, input().split())
    m = map(int, input().split())

    print((max(m) * s - 1) // 1000 + 1)

if __name__ == '__main__':
    main()
