"""
5361. 전투 드로이드 가격

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 23일
"""

import sys

def main():
    price = [350.34, 230.90, 190.55, 125.30, 180.90]

    for _ in range(int(input())):
        amount = map(float, sys.stdin.readline().split())
        res = sum([p * a for (p, a) in zip(price, amount)])

        print(f'${res:.2f}')

if __name__ == '__main__':
    main()