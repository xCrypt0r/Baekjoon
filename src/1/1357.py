"""
1357. 뒤집힌 덧셈

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 13일
"""

def Rev(x):
    return int(str(x)[::-1])

def main():
    X, Y = map(int, input().split())

    print(Rev((Rev(X)) + Rev(Y)))

if __name__ == '__main__':
    main()
