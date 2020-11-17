"""
10820. 문자열 분석

작성자: xCrypt0r
언어: Python 3
사용 메모리: 32,724 KB
소요 시간: 144 ms
해결 날짜: 2020년 9월 25일
"""

import re

def main():
    rgx = [re.compile(r'[a-z]'), re.compile(r'[A-Z]'), re.compile(r'\d'), re.compile(r' ')]

    while True:
        try:
            s = input()
        except:
            break

        count = [len(re.findall(r, s)) for r in rgx]

        print(*count)

if __name__ ==  '__main__':
    main()