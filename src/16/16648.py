"""
16648. Accumulator Battery

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    t, p = map(int, input().split())

    if p >= 20:
        s = (100 - p) / t

        print((p - 20) / s + 20 / (s / 2))
    else:
        s = (80 + (20 - p) * 2) / t

        print(p / (s / 2))

if __name__ == '__main__':
    main()