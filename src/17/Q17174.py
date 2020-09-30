def main():
    N, M = map(int, input().split())
    count = N

    while N >= M:
        N //= M
        count += N

    print(count)

if __name__ == '__main__':
    main()
