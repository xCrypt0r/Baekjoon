"""
2738. 행렬 덧셈

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 26일
"""

from sys import stdin

input = stdin.readline

def main():
    N, M = map(int, input().split())
    A = [list(map(int, input().split())) for _ in range(N)]
    B = [list(map(int, input().split())) for _ in range(N)]

    for i in range(N):
        for j in range(M):
            print(A[i][j] + B[i][j], end=' ')

        print()

if __name__ == '__main__':
    main()