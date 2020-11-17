"""
17009. Winning Score

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 13일
"""

def main():
    score1 = sum(map(lambda i: int(input()) * i, range(3, 0, -1)))
    score2 = sum(map(lambda i: int(input()) * i, range(3, 0, -1)))

    print('A' if score1 > score2 else ('B' if score1 < score2 else 'T'))

if __name__ == '__main__':
    main()
