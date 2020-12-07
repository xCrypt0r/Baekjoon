"""
15858. Simple Arithmetic

작성자: xCrypt0r
언어: Python 3
사용 메모리: 35,172 KB
소요 시간: 116 ms
해결 날짜: 2020년 12월 7일
"""

from sys import stdin
from decimal import Decimal as D

input = stdin.readline

def main():
    a, b, c = map(D, input().split())

    print(a * b / c)

if __name__ == '__main__':
    main()