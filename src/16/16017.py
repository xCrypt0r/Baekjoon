"""
16017. Telemarketer or not?

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    n = [int(input()) for _ in range(4)]

    if n[0] > 7 < n[3] and n[1] == n[2]: print('ignore')
    else: print('answer')

if __name__ == '__main__':
    main()
