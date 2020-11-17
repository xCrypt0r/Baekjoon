"""
3004. 체스판 조각

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    pieces = 2
    add = 2

    for i in range(1, int(input())):
        pieces += add

        if i % 2 == 0:
            add += 1

    print(pieces)

if __name__ == '__main__':
    main()
