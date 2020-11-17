"""
2309. 일곱 난쟁이

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 25일
"""

from itertools import combinations

def find_dwarf(case):
    if sum(case) == 100:
        print(*sorted(case), sep='\n')

        return True

    return False

def main():
    heights = [int(input()) for _ in range(9)]

    for case in combinations(heights, 7):
        if find_dwarf(case):
            break

if __name__ == '__main__':
    main()