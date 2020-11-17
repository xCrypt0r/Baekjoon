"""
3049. 다각형의 대각선

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 21일
"""

def main():
    N = int(input())

    print(N * (N - 1) * (N - 2) * (N - 3) // 24)

if __name__ == '__main__':
    main()
