"""
14470. 전자레인지

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    A, B, C, D, E = [int(input()) for _ in range(5)]
    
    print(abs(A) * C + D + B * E if A < 0 else (B - A) * E)

if __name__ == '__main__':
    main()
