"""
11966. 2의 제곱인가?

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 23일
"""

def main():
    a = [2 ** x for x in range(31)]
    N = int(input())

    print(1 if N in a else 0)

if __name__ == '__main__':
    main()