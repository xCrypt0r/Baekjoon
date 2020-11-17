"""
15667. 2018 연세대학교 프로그래밍 경진대회

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 23일
"""

def main():
    N = int(input())

    for i in range(1, N + 1):
        if i * (i + 1) == N - 1:
            print(i)

            break

if __name__ == '__main__':
    main()