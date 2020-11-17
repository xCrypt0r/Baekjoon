"""
17783. Breaking Branches

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 24일
"""

def main():
    n = int(input())

    print('Bob' if n & 1 else f'Alice\n{n // 2}')

if __name__ == '__main__':
    main()