"""
13236. Collatz Conjecture

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 23일
"""

def main():
    n = int(input())
    res = [n]

    while n != 1:
        n = n * 3 + 1 if n & 1 else n // 2

        res.append(n)

    print(*res)

if __name__ == '__main__':
    main()