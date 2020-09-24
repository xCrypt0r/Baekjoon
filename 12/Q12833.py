def main():
    A, B, C = map(int, input().split())

    print(A^(B if C & 1 else 0))

if __name__ == '__main__':
    main()