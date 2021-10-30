"""
1287. 할 수 있다

작성자: xCrypt0r
언어: Python 3
사용 메모리: 33,032 KB
소요 시간: 132 ms
해결 날짜: 2021년 10월 30일
"""

import re

def main():
    formula = input()

    if len(re.findall('[+\-*/]', formula)) + 1 != len(re.findall('\d+', formula)):
        print('ROCK')

        return

    formula = formula.replace('/', '//').replace('**', '@').replace('()', '@')

    try:
        print(eval(formula))
    except:
        print('ROCK')

if __name__ == '__main__':
    main()