"""
5987. String Function Encoding

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,624 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 20일
"""

def encode(n, s):
    return s[n:] + s

def main():
    for _ in range(int(input())):
        N, C, S = input().split()

        for _ in range(int(C)):
            S = encode(int(N), S)

        print(S)

if __name__ == '__main__':
    main()
