"""
4493. 가위 바위 보?

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 188 ms
해결 날짜: 2020년 9월 23일
"""

import sys

def main():
    for _ in range(int(input())):
        count = 0

        for _ in range(int(input())):
            a, b = sys.stdin.readline().split()

            if a == b: pass
            elif (a == 'P' and b == 'R') or (a == 'S' and b == 'P') or (a == 'R' and b == 'S'): count += 1
            else: count -= 1

        print('Player 1' if count > 0 else ('Player 2' if count < 0 else 'TIE'))

if __name__ == '__main__':
    main()