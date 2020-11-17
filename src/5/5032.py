"""
5032. 탄산 음료

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    e, f, c = map(int, input().split())
    e += f
    drink = 0

    while e >= c:
        drink += e // c
        e = e // c + e % c

    print(drink)

if __name__ == '__main__':
    main()