"""
10929. SHA-224

작성자: xCrypt0r
언어: Python 3
사용 메모리: 40,104 KB
소요 시간: 80 ms
해결 날짜: 2020년 9월 16일
"""

from hashlib import sha224

def main():
    print(sha224(input().encode('utf-8')).hexdigest())

if __name__ == '__main__':
    main()
