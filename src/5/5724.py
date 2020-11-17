"""
5724. 파인만

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 16일
"""

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
