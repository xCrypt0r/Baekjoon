"""
15726. 이칙연산

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    A, B, C = map(int, input().split())

    print(int(A * B / C if B > C else A / B * C))

if __name__ == '__main__':
    main()