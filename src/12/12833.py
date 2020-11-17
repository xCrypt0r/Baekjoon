"""
12833. XORXORXOR

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 24일
"""

def main():
    A, B, C = map(int, input().split())

    print(A^(B if C & 1 else 0))

if __name__ == '__main__':
    main()