"""
1850. 최대공약수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 41,256 KB
소요 시간: 80 ms
해결 날짜: 2020년 9월 25일
"""

from math import gcd

def main():
    A, B = map(int, input().split())

    print('1' * gcd(A, B))

if __name__ == '__main__':
    main()