def main():
    N, M = map(int, input().split())
    basket = [0] * N

    for _ in range(M):
        i, j, k = map(int, input().split())

        for x in range(i - 1, j):
            basket[x] = k

    print(*basket, sep=' ')

if __name__ == '__main__':
    main()