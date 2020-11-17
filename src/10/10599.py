"""
10599. 페르시아의 왕들

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    while True:
        a, b, c, d = map(int, input().split())

        if all(v == 0 for v in [a, b, c, d]):
            break

        print(f'{c - b} {d - a}')

if __name__ == '__main__':
    main()
