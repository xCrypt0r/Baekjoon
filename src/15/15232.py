"""
15232. Rectangles

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    R, C = map(int, [input(), input()])

    for _ in range(R):
        print('*' * C)

if __name__ == '__main__':
    main()
