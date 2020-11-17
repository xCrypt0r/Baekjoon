"""
8246. Stół

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 22일
"""

def main():
    A, B, K = map(int, input().split())

    print((A // K) * (B // K) - max(A // K - 2, 0) * max(B // K - 2, 0))

if __name__ == '__main__':
    main()