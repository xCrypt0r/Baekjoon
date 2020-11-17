"""
10102. 개표

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    input()

    votes = input()
    a, b = votes.count('A'), votes.count('B')

    print('A' if a > b else ('B' if a < b else 'Tie'))

if __name__ == '__main__':
    main()