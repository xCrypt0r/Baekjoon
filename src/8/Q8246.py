def main():
    A, B, K = map(int, input().split())

    print((A // K) * (B // K) - max(A // K - 2, 0) * max(B // K - 2, 0))

if __name__ == '__main__':
    main()