"""
13240. Chessboard

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    N, M = map(int, input().split())

    for i in range(1, N + 1):
        print(''.join(['.' if (i + j) & 1 else '*' for j in range(1, M + 1)]))

if __name__ == '__main__':
    main()
