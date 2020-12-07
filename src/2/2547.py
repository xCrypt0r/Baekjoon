"""
2547. 사탕 선생 고창영

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,088 KB
소요 시간: 72 ms
해결 날짜: 2020년 12월 7일
"""

from sys import stdin

input = stdin.readline

def main():
    T = int(input())

    for _ in range(T):
        input()

        N = int(input())
        total = 0

        for _ in range(N):
            total += int(input())

        print('NO' if total % N else 'YES')

if __name__ == '__main__':
    main()