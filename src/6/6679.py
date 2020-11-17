"""
6679. 싱기한 네자리 숫자

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 16일
"""

def sum_digits(num, base):
    res = 0

    while num > 0:
        res += num % base
        num //= base

    return res

def main():
    for i in range(1000, 10000):
        x = sum_digits(i, 10)
        y = sum_digits(i, 12)
        z = sum_digits(i, 16)

        if x == y == z:
            print(i)

if __name__ == '__main__':
    main()