"""
1560. 비숍

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,200 KB
소요 시간: 68 ms
해결 날짜: 2021년 9월 29일
"""

def main():
    N = int(input())

    print(N if N < 3 else N * 2 - 2)

if __name__ == '__main__':
    main()