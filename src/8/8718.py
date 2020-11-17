"""
8718. Bałwanek

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    x, k = map(int, input().split())

    if k * 7 <= x: v = k * 7000
    elif k * 3.5 <= x: v = k * 3500
    elif k * 1.75 <= x: v = k * 1750
    else: v = 0

    print(v)

if __name__ == '__main__':
    main()
