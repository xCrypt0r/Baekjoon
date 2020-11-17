"""
2010. 플러그

작성자: xCrypt0r
언어: Python 3
사용 메모리: 33,568 KB
소요 시간: 196 ms
해결 날짜: 2020년 9월 25일
"""

from sys import stdin

input = stdin.readline

def main():
    N = int(input())

    print(sum([int(input()) for _ in range(N)]) - N + 1)

if __name__ == '__main__':
    main()