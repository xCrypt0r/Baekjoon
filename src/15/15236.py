"""
15236. Dominos

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    N = int(input())

    print(N * (N + 1) * (N + 2) // 2)

if __name__ == '__main__':
    main()
