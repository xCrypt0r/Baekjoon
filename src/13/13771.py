"""
13771. Presents

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 24일
"""

from sys import stdin

input = stdin.readline

def main():
    prices = sorted([float(input()) for _ in range(int(input()))])

    print(f'{prices[1]:.2f}')

if __name__ == '__main__':
    main()