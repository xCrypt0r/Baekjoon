"""
17388. 와글와글 숭고한

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    SKH = list(map(int, input().split()))

    if sum(SKH) >= 100: print('OK')
    else: print(['Soongsil', 'Korea', 'Hanyang'][SKH.index(min(SKH))])

if __name__ == '__main__':
    main()

