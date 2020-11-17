"""
1284. 집 주소

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 21일
"""

def main():
    width = { '0': 4, '1': 2 }

    while True:
        N = input()

        if N == '0':
            break

        w = 0

        for n in N:
            w += width.get(n, 3)

        print(w + 1 + len(N))

if __name__ == '__main__':
    main()
