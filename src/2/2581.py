"""
2581. 소수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,488 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 25일
"""

from math import sqrt

def main():
    M, N = map(int, [input(), input()])
    primes = []

    for i in range(M, N + 1):
        if i == 1:
            pass
        else:
            for j in range(2, int(sqrt(i)) + 1):
                if i % j == 0:
                    break
            else:
                primes.append(i)

    print(-1 if not primes else f'{sum(primes)}\n{primes[0]}')

if __name__ == '__main__':
    main()