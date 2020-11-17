"""
9523. Arithmetic with Morse

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    N = int(input())
    morse = { '.': 1, '-': 5, ':': 2, '=': 10 }
    expression = [morse.get(x, x) for x in list(input())]
    formula = ''
    temp = 0

    for x in expression:
        if isinstance(x, int):
            temp += x
        else:
            if temp:
                formula += str(temp)
                temp = 0

            formula += x

    formula += str(temp)

    print(eval(formula))

if __name__ == '__main__':
    main()
