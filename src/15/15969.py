"""
15969. 행복

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 22일
"""

import sys

def main():
    input()

    score = [int(x) for x in sys.stdin.readline().split()]

    print(max(score) - min(score))

if __name__ == '__main__':
    main()