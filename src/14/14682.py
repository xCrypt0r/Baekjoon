"""
14682. Shifty Sum

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    N, k = [int(input()) for _ in range(2)]
    res = N

    for _ in range(k):
        N *= 10
        res += N

    print(res)

if __name__ == '__main__':
    main()