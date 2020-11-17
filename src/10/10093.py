"""
10093. 숫자

작성자: xCrypt0r
언어: Python 3
사용 메모리: 32,208 KB
소요 시간: 108 ms
해결 날짜: 2020년 9월 18일
"""

def main():
    a, b = map(int, input().split())

    if a > b:
        a, b = b, a

    print(0 if a == b else b - a - 1)
    print(*range(a + 1, b))

if __name__ == '__main__':
    main()
