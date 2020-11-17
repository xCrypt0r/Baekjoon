"""
13221. Manhattan

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,488 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 24일
"""

from sys import stdin

input = stdin.readline

def main():
    x, y = map(int, input().split())
    md = float('inf')

    for _ in range(int(input())):
        tx, ty = map(int, input().split())
        d = abs(tx - x) + abs(ty - y)

        if d < md:
            md = d
            mx = tx
            my = ty

    print(mx, my)

if __name__ == '__main__':
    main()