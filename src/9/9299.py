"""
9299. Math Tutoring

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 88 ms
해결 날짜: 2020년 9월 25일
"""

from sys import stdin

input = stdin.readline

def main():
    for i in range(1, int(input()) + 1):
        coef = [int(x) for x in input().split()]
        exponent = coef.pop(0)

        coef.pop()

        coef = [coef[i] * (exponent - i) for i in range(len(coef))]

        coef.insert(0, exponent - 1)

        print(f'Case {i}: {" ".join(map(str, coef))}')

if __name__ ==  '__main__':
    main()