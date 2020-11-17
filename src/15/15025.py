"""
15025. Judging Moose

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    l, r = map(int, input().split())

    if l == r == 0:
        print('Not a moose')
    elif l == r:
        print(f'Even {l * 2}')
    else:
        print(f'Odd {max(l, r) * 2}')

if __name__ == '__main__':
    main()