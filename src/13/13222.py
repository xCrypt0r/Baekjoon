"""
13222. Matches

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,488 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 19일
"""

from math import sqrt

def main():
    N, W, H = map(int, input().split())
    diagonal = int(sqrt(W ** 2 + H ** 2))

    for _ in range(N):
        print('YES' if int(input()) <= diagonal else 'NO')

if __name__ == '__main__':
    main()
