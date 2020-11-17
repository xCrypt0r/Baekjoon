"""
9613. GCD 합

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,488 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 22일
"""

from math import gcd
from itertools import combinations

def main():
    for _ in range(int(input())):
        num = [int(x) for x in input().split()][1:]
        res = 0

        for x, y in combinations(num, 2):
            res += gcd(x, y)

        print(res)

if __name__ == '__main__':
    main()