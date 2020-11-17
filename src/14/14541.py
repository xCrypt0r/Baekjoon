"""
14541. Speed Limit

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    while True:
        n = int(input())

        if n == -1:
            break

        distance = 0
        prev = 0

        for _ in range(n):
            speed, time = map(int, input().split())
            distance += speed * (time - prev)
            prev = time

        print(f'{distance} miles')

if __name__ == '__main__':
    main()
