"""
13228. The REAL Manhattan distance

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 24일
"""

from sys import stdin

input = stdin.readline

def main():
    for _ in range(int(input())):
        x1, y1, f1, x2, y2, f2 = map(int, input().split())

        print(f1 + f2 + abs(x2 - x1) + abs(y2 - y1))

if __name__ == '__main__':
    main()