"""
17174. 전체 계산 횟수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 21일
"""

def main():
    N, M = map(int, input().split())
    count = N

    while N >= M:
        N //= M
        count += N

    print(count)

if __name__ == '__main__':
    main()
