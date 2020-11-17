"""
9286. Gradabase

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 152 ms
해결 날짜: 2020년 9월 24일
"""

from sys import stdin

input = stdin.readline

def main():
    for i in range(1, int(input()) + 1):
        print(f'Case {i}:')

        for grade in [int(input()) for _ in range(int(input()))]:
            if grade < 6:
                print(grade + 1)

if __name__ == '__main__':
    main()