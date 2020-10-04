def main():
    N, M, K = map(int, input().split())
    count = 0

    while N + M >= K and N >= 0 and M >= 0:
        N -= 2
        M -= 1
        count += 1

    print(count - 1)

if __name__ == '__main__':
    main()