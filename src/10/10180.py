"""
10180. Ship Selection

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    T = int(input())

    for _ in range(T):
        N, D = map(int, input().split())
        available = 0

        for _ in range(N):
            V, F, C = map(int, input().split())

            if F >= C * D / V:
                available += 1

        print(available)

if __name__ == '__main__':
    main()
