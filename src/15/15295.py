"""
15295. Chanukah Challenge

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 88 ms
해결 날짜: 2020년 9월 24일
"""

from sys import stdin

input = stdin.readline

def main():
    for _ in range(int(input())):
        i, N = map(int, input().split())

        print(f'{i} {N * (N + 3) // 2}')

if __name__ == '__main__':
    main()