"""
15128. Congruent Numbers

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    p1, q1, p2, q2 = map(int, input().split())

    print(1 if (p1 * p2 / q1 / q2 / 2).is_integer() else 0)

if __name__ == '__main__':
    main()
