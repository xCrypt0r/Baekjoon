"""
1297. TV 크기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    d, h, w = map(int, input().split())

    hk = pow(d ** 2 * h ** 2 // (h ** 2 + w ** 2), 0.5)
    wk = pow(d ** 2 * w ** 2 // (h ** 2 + w ** 2), 0.5)

    print(f'{int(hk)} {int(wk)}')

if __name__ == '__main__':
    main()
