"""
15474. 鉛筆

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    N, A, B, C, D = map(int, input().split())

    A = (N // A + (1 if N % A else 0)) * B
    C = (N // C + (1 if N % C else 0)) * D

    print(min(A, C))

if __name__ == '__main__':
    main()
