"""
11795. Donation Packaging

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 80 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    T = int(input())
    amount = [0, 0, 0]

    for _ in range(T):
        i = 0

        for x in map(int, input().split()):
            amount[i] += x
            i += 1

        if all(a >= 30 for a in amount):
            ready = min(amount)
            amount = [a - ready for a in amount]

            print(ready)
        else: print('NO')

if __name__ == '__main__':
    main()
