def main():
    N, M = map(int, input().split())

    print((str(N) * N)[:M])

if __name__ == '__main__':
    main()
