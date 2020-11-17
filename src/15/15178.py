"""
15178. Angles

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    for _ in range(int(input())):
        a, b, c = map(int, input().split())

        if sum([a, b, c]) != 180:
            print(f'{a} {b} {c} Check')
        else:
            print(f'{a} {b} {c} Seems OK')

if __name__ == '__main__':
    main()
