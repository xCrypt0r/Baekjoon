"""
10810. 공 넣기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 16일
"""

def main():
    N, M = map(int, input().split())
    basket = [0] * N

    for _ in range(M):
        i, j, k = map(int, input().split())

        for x in range(i - 1, j):
            basket[x] = k

    print(*basket, sep=' ')

if __name__ == '__main__':
    main()