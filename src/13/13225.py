"""
13225. Divisors

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 19일
"""

def count_divisors(n):
    divisors = [i for i in range(1, n + 1) if not n % i]

    return len(divisors)

def main():
    for _ in range(int(input())):
        n = int(input())

        print(f'{n} {count_divisors(n)}')

if __name__ == '__main__':
    main()
