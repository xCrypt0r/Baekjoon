"""
11134. 쿠키애호가

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 21일
"""

def main():
    for _ in range(int(input())):
        N, C = map(int, input().split())

        print(N // C + 1 if N % C else N // C)

if __name__ == '__main__':
    main()
