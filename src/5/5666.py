"""
5666. Hot Dogs

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    while True:
        try:
            H, P = map(int, input().split())

            print(f'{(H / P):.2f}')
        except:
            break

if __name__ == '__main__':
    main()