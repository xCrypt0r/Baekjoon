"""
1964. 오각형, 오각형, 오각형…

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    N = int(input())

    print((N * (N - 1) * 3 // 2 + N * 4 + 1) % 45678)

if __name__ == '__main__':
    main()