"""
17945. 통학의 신

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,488 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 25일
"""

from math import sqrt

def main():
    A, B = map(int, input().split())
    x = map(int, sorted(set([-A - sqrt(A ** 2 - B), -A + sqrt(A ** 2 - B)])))

    print(*x)

if __name__ == '__main__':
    main()