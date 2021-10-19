"""
2408. 큰 수 계산

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,200 KB
소요 시간: 68 ms
해결 날짜: 2021년 10월 19일
"""

def main():
    formula = ''
    N = int(input())

    for _ in range(N * 2 - 1):
        formula += input()

    formula = formula.replace('/', '//')

    print(eval(formula))

if __name__ == '__main__':
    main()