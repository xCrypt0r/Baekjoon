"""
1159. 농구 경기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,848 KB
소요 시간: 92 ms
해결 날짜: 2020년 9월 20일
"""

from collections import Counter

def main():
    players = [input() for _ in range(int(input()))]
    frequency = Counter(p[0] for p in players)
    res = sorted([k for k, v in frequency.items() if v >= 5])

    print('PREDAJA' if not res else ''.join(res))

if __name__ == '__main__':
    main()
