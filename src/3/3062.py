"""
3062. 수 뒤집기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 24일
"""

from sys import stdin

input = stdin.readline

def main():
    for _ in range(int(input())):
        N = input()
        N = str(int(N) + int(N[::-1]))

        print('YES' if N == N[::-1] else 'NO')

if __name__ == '__main__':
    main()