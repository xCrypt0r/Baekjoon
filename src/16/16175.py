"""
16175. General Election

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 172 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    for _ in range(int(input())):
        N, M = map(int, input().split())
        votes = [0] * N

        for _ in range(M):
            for i, v in enumerate(map(int, input().split())):
                votes[i] += v

        print(votes.index(max(votes)) + 1)

if __name__ == '__main__':
    main()
