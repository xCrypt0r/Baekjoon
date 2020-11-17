"""
9699. RICE SACK

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 25일
"""

from sys import stdin

input = stdin.readline

def main():
    for i in range(1, int(input()) + 1):
        weights = map(int, input().split())

        print(f'Case #{i}: {max(weights)}')

if __name__ == '__main__':
    main()