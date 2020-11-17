"""
4659. 비밀번호 발음하기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 32,724 KB
소요 시간: 136 ms
해결 날짜: 2020년 9월 18일
"""

import re

rgx1 = re.compile('[aeiou]')
rgx2 = re.compile('[aeiou]{3,}|[^aeiou]{3,}')
rgx3 = re.compile('([^eo])\\1+')

def is_acceptable(pwd):
    if not re.search(rgx1, pwd): return False
    if re.search(rgx2, pwd): return False
    if re.search(rgx3, pwd): return False

    return True

def main():
    while True:
        password = input()

        if password == 'end': break
        else:
            if is_acceptable(password): print('<{}> is acceptable.'.format(password))
            else: print('<{}> is not acceptable.'.format(password))

if __name__ == '__main__':
    main()
