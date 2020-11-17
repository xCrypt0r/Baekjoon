"""
10474. 분수좋아해?

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 172 ms
해결 날짜: 2020년 9월 21일
"""

def main():
    while True:
        a, b = map(int, input().split())

        if a == b == 0:
            break

        c = a // b

        print(f'{c} {a - b * c} / {b}')

if __name__ == '__main__':
    main()
