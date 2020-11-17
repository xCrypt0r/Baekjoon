"""
15340. Sim Card

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 17일
"""

def main():
    while True:
        c, d = map(int, input().split())

        if c == d == 0:
            break

        print(min([c * 30 + d * 40, c * 35 + d * 30, c * 40 + d * 20]))

if __name__ == '__main__':
    main()