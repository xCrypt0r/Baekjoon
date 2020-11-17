"""
7595. Triangles

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 92 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    while True:
        n = int(input())

        if n == 0:
            break

        for i in range(1, n + 1):
            print('*' * i)

if __name__ == '__main__':
    main()
