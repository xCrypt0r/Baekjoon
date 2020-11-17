"""
10698. Ahmed Aly

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 23일
"""

from sys import stdin

input = stdin.readline

def main():
    for i in range(1, int(input()) + 1):
        question, answer = input().split(' = ')

        if eval(question) == int(answer):
            print(f'Case {i}: YES')
        else:
            print(f'Case {i}: NO')

if __name__ == '__main__':
    main()