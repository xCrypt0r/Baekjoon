"""
1264. 모음의 개수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 32,724 KB
소요 시간: 120 ms
해결 날짜: 2020년 9월 17일
"""

import re

def main():
    r = re.compile('[aeiou]', re.I)

    while True:
        s = input()

        if s == '#':
            break

        print(len(r.findall(s)))

if __name__ == '__main__':
    main()

