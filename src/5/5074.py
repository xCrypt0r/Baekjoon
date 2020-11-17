"""
5074. When Do We Finish?

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 24일
"""

def main():
    while True:
        start, duration = input().split()

        if start == duration == '00:00':
            break

        h1, m1 = map(int, start.split(':'))
        h2, m2 = map(int, duration.split(':'))
        m = m1 + m2
        h = h1 + h2
        n = 0

        if m >= 60:
            m -= 60
            h += 1

        if h >= 24:
            n += h // 24
            h %= 24

        if n > 0:
            print(f'{h:02}:{m:02} +{n}')
        else:
            print(f'{h:02}:{m:02}')

if __name__ == '__main__':
    main()