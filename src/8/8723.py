"""
8723. Patyki

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    sides = [int(x) for x in input().split()]

    sides.sort()

    print(2 if sides[0] == sides[1] == sides[2] else (1 if sides[0] ** 2 + sides[1] ** 2 == sides[2] ** 2 else 0))

if __name__ == '__main__':
    main()