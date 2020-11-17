"""
15633. Fan Death

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    n = int(input())
    res = n

    for i in range(1, n):
        if n % i == 0:
            res += i

    print(res * 5 - 24)

if __name__ == '__main__':
    main()