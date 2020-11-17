"""
11179. 2진수 뒤집기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 17일
"""

def main():
    print(int(''.join(reversed(bin(int(input()))[2:])), 2))

if __name__ == '__main__':
    main()
