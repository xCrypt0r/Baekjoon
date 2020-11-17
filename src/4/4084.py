"""
4084. Viva la Diferencia

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 25일
"""

from sys import stdin

input = stdin.readline

def main():
    while True:
        a, b, c, d = map(int, input().split())

        if a == b == c == d == 0:
            break

        count = 0

        while not a == b == c == d:
            a, b, c, d = map(abs, [a - b, b - c, c - d, d - a])
            count += 1

        print(count)

if __name__ ==  '__main__':
    main()