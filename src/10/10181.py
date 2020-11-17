"""
10181. Federation Favorites

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 25일
"""

from sys import stdin

input = stdin.readline

def main():
    while True:
        n = int(input())

        if n == -1:
            break

        divisors = []

        for i in range(1, n):
            if n % i == 0:
                divisors.append(i)

        if sum(divisors) == n:
            print(f'{n} = {" + ".join(map(str, divisors))}')
        else:
            print(f'{n} is NOT perfect.')

if __name__ == '__main__':
    main()