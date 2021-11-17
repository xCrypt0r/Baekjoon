def main():
    N = int(input())
    X = int(input())
    res = 0

    for _ in range(N):
        P1, P2 = map(int, input().split())

        res += int(input()) if abs(P1 - P2) > X else max(P1, P2)

    print(res)

if __name__ == '__main__':
    main()