"""
1629. 곱셈

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,200 KB
소요 시간: 68 ms
해결 날짜: 2021년 10월 31일
"""

def main():
    A, B, C = map(int, input().split())

    print(dac(A, B, C))

def dac(a, b, c):
    if b == 1:
        return a % c

    temp = dac(a, b // 2, c)

    return temp * temp % c if b % 2 == 0 else temp * temp * a % c

if __name__ == '__main__':
    main()