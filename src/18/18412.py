"""
18412. 文字列の反転

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 16일
"""

def main():
    N, A, B = map(int, input().split())
    S = input()

    print(S[0:A-1] + S[A-1:B][::-1] + S[B:])

if __name__ == '__main__':
    main()