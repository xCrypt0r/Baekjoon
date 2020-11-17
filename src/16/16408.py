"""
16408. Poker Hand

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    ranks = [card[0] for card in input().split()]

    print(ranks.count(max(ranks, key=ranks.count)))

if __name__ == '__main__':
    main()
