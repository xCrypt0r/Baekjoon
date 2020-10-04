def main():
    N, M, K = map(int, input().split())

    print(min(M, K) - max(M, K) + N)

if __name__ == '__main__':
    main()
