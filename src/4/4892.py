"""
4892. 숫자 맞추기 게임

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 80 ms
해결 날짜: 2020년 9월 18일
"""

def main():
    i = 0

    while True:
        i += 1
        n0 = int(input())

        if n0 == 0:
            break

        n1 = n0 * 3
        n2 = (n1 + 1) // 2 if n1 & 1 else n1 // 2
        n3 = n2 * 3
        n4 = n3 // 9

        print('{}. {} {}'.format(i, 'odd' if n1 & 1 else 'even', n4))

if __name__ == '__main__':
    main()
