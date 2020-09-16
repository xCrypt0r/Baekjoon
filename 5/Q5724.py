def main():
    dp = [0] * 101

    while True:
        N = int(input())

        if not N:
            break

        for i in range(1, N + 1):
            if not dp[i]:
                dp[i] = dp[i - 1] + i ** 2

        print(dp[N])

if __name__ == '__main__':
    main()
