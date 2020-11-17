"""
10941. BASE16 디코딩

작성자: xCrypt0r
언어: Python 3
사용 메모리: 39,068 KB
소요 시간: 128 ms
해결 날짜: 2020년 9월 16일
"""

from base64 import b16decode

def main():
    print(b16decode(input().encode('utf-8')).decode('utf-8'))

if __name__ == '__main__':
    main()
