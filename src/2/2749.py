"""
2749. 피보나치 수 3

작성자: xCrypt0r
언어: Python 3
사용 메모리: 88,560 KB
소요 시간: 528 ms
해결 날짜: 2021년 11월 4일
"""

def main():
    n = int(input())
    fibonacci = [0, 1]
    mod = 1000000
    p = 15 * 10 ** 5

    for i in range(2, p):
        fibonacci.append((fibonacci[i - 1] + fibonacci[i - 2]) % mod)

    print(fibonacci[n % p])

if __name__ == '__main__':
    main()