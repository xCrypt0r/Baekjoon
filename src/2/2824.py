"""
2824. 최대공약수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,312 KB
소요 시간: 104 ms
해결 날짜: 2021년 10월 31일
"""

from sys import stdin
from math import prod

input = stdin.readline

def main():
    N = int(input())
    A = prod(list(map(int, input().split())))
    M = int(input())
    B = prod(list(map(int, input().split())))

    print(str(gcd(A, B))[-9:])

def gcd(a, b):
    while b > 0 :
        tmp = a % b
        a = b
        b = tmp

    return a

if __name__ == '__main__':
    main()