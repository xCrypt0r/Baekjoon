"""
6974. Long Division

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,088 KB
소요 시간: 72 ms
해결 날짜: 2020년 11월 26일
"""

def main():
    n = int(input())

    for _ in range(n):
        a, b = map(int, [input(), input()])

        print(a // b)
        print(a % b)
        print()

if __name__ == '__main__':
    main()