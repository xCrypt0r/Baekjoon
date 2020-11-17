"""
5704. 팬그램

작성자: xCrypt0r
언어: Python 3
사용 메모리: 32,984 KB
소요 시간: 120 ms
해결 날짜: 2020년 9월 26일
"""

from sys import stdin
from string import ascii_lowercase as alphabet

input = stdin.readline

def main():
    while True:
        s = input().strip()

        if s == '*':
            break

        for c in alphabet:
            if not c in s:
                print('N')

                break
        else:
            print('Y')

if __name__ == '__main__':
    main()