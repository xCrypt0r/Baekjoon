"""
19602. Dog Treats

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    S = int(input())
    M = int(input())
    L = int(input())
    score = S + M * 2 + L * 3

    print('sad' if score < 10 else 'happy')

if __name__ == '__main__':
    main()
