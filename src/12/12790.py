"""
12790. Mini Fantasy War

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 23일
"""

from sys import stdin

input = stdin.readline

def main():
    for _ in range(int(input())):
        ability = [int(x) for x in input().split()]
        power = max(1, ability[0] + ability[4]) + max(1, ability[1] + ability[5]) * 5 + max(0, ability[2] + ability[6]) * 2 + (ability[3] + ability[7]) * 2

        print(power)

if __name__ == '__main__':
    main()