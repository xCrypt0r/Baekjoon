"""
2798. 블랙잭

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 100 ms
해결 날짜: 2020년 9월 26일
"""

from itertools import combinations

def main():
    N, M = map(int, input().split())
    cards = list(map(int, input().split()))
    res = 0

    for case in combinations(cards, 3):
        csum = sum(case)

        if res < csum <= M:
            res = csum

    print(res)

if __name__ == '__main__':
    main()