"""
1252. 이진수 덧셈

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    n = [int(x, 2) for x in input().split()]

    print(bin(sum(n))[2:])

if __name__ == '__main__':
    main()
