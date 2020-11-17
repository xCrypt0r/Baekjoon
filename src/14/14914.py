"""
14914. 사과와 바나나 나눠주기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,488 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 17일
"""

from math import gcd

def main():
    a, b = map(int, input().split())
    g = gcd(a, b)

    for i in range(1, g + 1):
        if g % i == 0:
            print('{} {} {}'.format(i, a // i, b // i))

if __name__ == '__main__':
    main()