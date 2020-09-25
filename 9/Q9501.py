def main():
    T = int(input())

    for _ in range(T):
        N, D = map(int, input().split())
        available = 0

        for _ in range(N):
            V, F, C = map(int, input().split())

            if F >= C * D / V:
                available += 1

        print(available)

if __name__ == '__main__':
    main()