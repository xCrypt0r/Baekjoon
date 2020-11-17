"""
16693. Pizza Deal

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,488 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

from math import pi

def main():
    A1, P1 = map(int, input().split())
    R1, P2 = map(int, input().split())
    a = [A1 / P1, (R1 ** 2 * pi) / P2]

    print('Whole pizza' if a[0] < a[1] else 'Slice of pizza')

if __name__ == '__main__':
    main()
