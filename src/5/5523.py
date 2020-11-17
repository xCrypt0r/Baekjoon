"""
5523. 경기 결과

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 872 ms
해결 날짜: 2020년 9월 21일
"""

import sys

def main():
    a, b = 0, 0

    for _ in range(int(input())):
        A, B = map(int, sys.stdin.readline().split())

        if A > B: a += 1
        elif A < B: b += 1

    print(a, b)

if __name__ == '__main__':
    main()
