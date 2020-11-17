"""
3507. Automated Telephone Exchange

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 19일
"""

from itertools import permutations

def main():
    n = int(input())

    if n > 198:
        print(0)

        return

    ate = range(100)
    pairs = [x for x in permutations(ate, 2) if sum(x) == n]

    print(len(pairs) + (0 if n & 1 else 1))

if __name__ == '__main__':
    main()
