"""
16815. Star in Parentheses

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    S = input()

    while '()' in S:
        S = S.replace('()', '')

    print(S.count('('))

if __name__ == '__main__':
    main()