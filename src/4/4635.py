"""
4635. Speed Limit

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    while True:
        n = int(input())

        if n == -1:
            break

        prev = 0
        distance = 0

        for _ in range(n):
            s, t = map(int, input().split())
            distance += s * (t - prev)
            prev = t

        print(f'{distance} miles')

if __name__ == '__main__':
    main()
