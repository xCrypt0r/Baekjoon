"""
4880. 다음수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 100 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    while True:
        a, b, c = map(int, input().split())

        if a == b == c == 0:
            break

        if b * 2 == a + c:
            print(f'AP {c + (c - b)}')
        else:
            print(f'GP {c * (c // b)}')

if __name__ == '__main__':
    main()