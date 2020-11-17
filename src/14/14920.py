"""
14920. 3n+1 수열

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 56 ms
해결 날짜: 2020년 9월 21일
"""

def main():
    c = int(input())
    n = 1

    while c != 1:
        c = c * 3 + 1 if c & 1 else c // 2
        n += 1

    print(n)

if __name__ == '__main__':
    main()
