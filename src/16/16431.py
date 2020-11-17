"""
16431. 베시와 데이지

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    Br, Bc = map(int, input().split())
    Dr, Dc = map(int, input().split())
    Jr, Jc = map(int, input().split())

    B =  max(abs(Jr - Br), abs(Jc - Bc))
    D = abs(Jr - Dr) + abs(Jc - Dc)

    print('bessie' if B < D else ('daisy' if B > D else 'tie'))

if __name__ == '__main__':
    main()
