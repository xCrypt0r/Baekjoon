"""
9950. Rectangles

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 152 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    while True:
        l, w, a = map(int, input().split())

        if l == w == a == 0:
            break

        if l == 0: l = a // w
        elif w == 0: w = a // l
        elif a == 0: a = l * w

        print(f'{l} {w} {a}')

if __name__ == '__main__':
    main()
