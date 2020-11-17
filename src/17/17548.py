"""
17548. Greetings!

작성자: xCrypt0r
언어: Python 3
사용 메모리: 32,724 KB
소요 시간: 128 ms
해결 날짜: 2020년 9월 20일
"""

import re

def main():
    print(re.sub(r'(e+)', r'\1' * 2, input()))

if __name__ == '__main__':
    main()
