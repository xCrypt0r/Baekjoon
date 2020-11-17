"""
17874. Piece of Cake!

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    n, h, v = map(int, input().split())

    print(max(h, n - h) * max(v, n - v) * 4)

if __name__ == '__main__':
    main()
