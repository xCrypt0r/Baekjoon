"""
2052. 지수연산

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,088 KB
소요 시간: 68 ms
해결 날짜: 2020년 12월 4일
"""

def main():
    a = 2 ** int(input())
    b = 10
    res = ''

    print("0.", end="")

    while b % a:
        print(b // a, end="")

        b -= (b // a) * a
        b *= 10

    print(b // a)

if __name__ == '__main__':
    main()