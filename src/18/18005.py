"""
18005. Even or Odd?

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    n=int(input())

    if n % 2 == 1: r = 0
    elif n // 2 % 2 == 0: r = 2
    else: r = 1

    print(r)

if __name__ == '__main__':
    main()
