"""
5618. 공약수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,488 KB
소요 시간: 2,792 ms
해결 날짜: 2020년 9월 23일
"""

from math import gcd

def main():
    input()

    num = [int(x) for x in input().split()]
    g = gcd(num[0], gcd(num[1], num[-1]))

    for i in range(1, g // 2 + 1):
        if not g % i:
            print(i)

    print(g)

if __name__ == '__main__':
    main()