"""
5073. 삼각형과 세 변

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 23일
"""

import sys

def main():
    while True:
        A, B, C = sorted(map(int, sys.stdin.readline().split()))

        if A == B == C == 0:
            break

        if A + B <= C:
            print('Invalid')
        else:
            print('Equilateral' if A == B == C else ('Isosceles' if A == B or B == C or C == A else 'Scalene'))

if __name__ == '__main__':
    main()