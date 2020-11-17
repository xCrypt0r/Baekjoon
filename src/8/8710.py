"""
8710. Koszykarz

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,488 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 14일
"""

from math import ceil

def main():
    k, w, m = map(int, input().split())

    print(0 if k >= w else ceil((w - k) / m))

if __name__ == '__main__':
    main()
