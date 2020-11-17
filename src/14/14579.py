"""
14579. 덧셈과 곱셈

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    a, b = map(int, input().split())
    acc = 0
    res = 1

    for i in range(1, a):
        acc += i

    for i in range(a, b + 1):
        acc += i
        res *= acc % 14579
        res %= 14579

    print(res)

if __name__ == '__main__':
    main()