"""
10934. SHA

작성자: xCrypt0r
언어: Python 3
사용 메모리: 39,836 KB
소요 시간: 80 ms
해결 날짜: 2020년 12월 3일
"""

import hashlib

def main():
    h = hashlib.new('sha')

    h.update(input().encode())

    print(h.hexdigest())

if __name__ ==  '__main__':
    main()