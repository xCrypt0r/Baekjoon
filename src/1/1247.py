"""
1247. 부호

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,088 KB
소요 시간: 204 ms
해결 날짜: 2020년 12월 5일
"""

from sys import stdin

input = stdin.readline

def main():
    for _ in range(3):
        N = int(input())
        S = 0

        for _ in range(N):
            S += int(input())

        print('-' if S < 0 else ('+' if S > 0 else '0'))

if __name__ == '__main__':
    main()
