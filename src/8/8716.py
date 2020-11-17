"""
8716. Pole

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    x1, y1, x2, y2 = map(int, input().split())
    x3, y3, x4, y4 = map(int, input().split())

    if x2 < x3 or x1 > x4 or y2 > y3 or y1 < y4:
        print(0)
    else:
        print((min(x2, x4) - max(x1, x3)) * (min(y1, y3) - max(y2, y4)))

if __name__ == '__main__':
    main()
