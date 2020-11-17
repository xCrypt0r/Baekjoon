"""
2407. 조합

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,488 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 22일
"""

from math import factorial

def main():
    n, m = map(int, input().split())

    print(factorial(n) // factorial(n - m) // factorial(m))

if __name__ == '__main__':
    main()