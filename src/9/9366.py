"""
9366. 삼각형 분류

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 23일
"""

import sys

def main():
    for i in range(1, int(input()) + 1):
        A, B, C = sorted(map(int, sys.stdin.readline().split()))

        if A + B <= C:
            print(f'Case #{i}: invalid!')
        else:
            res = 'equilateral' if A == B == C else ('isosceles' if A == B or B == C or C == A else 'scalene')

            print(f'Case #{i}: {res}')

if __name__ == '__main__':
    main()