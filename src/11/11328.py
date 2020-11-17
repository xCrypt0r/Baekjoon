"""
11328. Strfry

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 196 ms
해결 날짜: 2020년 9월 23일
"""

from sys import stdin

input = stdin.readline

def main():
    for _ in range(int(input())):
        c1, c2 = map(sorted, input().split())

        for i in range(len(c1)):
            if c1[i] != c2[i]:
                print('Impossible')

                break
        else:
            print('Possible')

if __name__ == '__main__':
    main()