"""
6249. TV Reports

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 24일
"""

from sys import stdin

input = stdin.readline

def main():
    n, p, h = map(int, input().split())
    prev = p
    highest = h

    for _ in range(n):
        current = int(input())

        if current < prev:
            print(f'NTV: Dollar dropped by {prev - current} Oshloobs')
        elif current > highest:
            highest = current

            print(f'BBTV: Dollar reached {current} Oshloobs, A record!')

        prev = current

if __name__ == '__main__':
    main()