"""
11772. POT

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    N = int(input())
    numbers = []
    pots = []

    for _ in range(N):
        P = input()

        numbers.append(int(P[0:-1]))
        pots.append(int(P[-1]))

    print(sum([numbers[i] ** pots[i] for i in range(N)]))

if __name__ == '__main__':
    main()
