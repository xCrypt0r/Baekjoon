"""
16428. A/B - 3

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    A, B = map(int, input().split())
    q, r = divmod(A, B)

    if B < 0 and A != 0:
        q += 1
        r -= B

    print(q, r, sep='\n')

if __name__ == '__main__':
    main()
