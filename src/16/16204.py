"""
16204. 카드 뽑기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 13일
"""

def main():
    N, M, K = map(int, input().split())

    print(min(M, K) - max(M, K) + N)

if __name__ == '__main__':
    main()
