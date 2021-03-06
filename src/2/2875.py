"""
2875. 대회 or 인턴

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 22일
"""

def main():
    N, M, K = map(int, input().split())
    count = 0

    while N + M >= K and N >= 0 and M >= 0:
        N -= 2
        M -= 1
        count += 1

    print(count - 1)

if __name__ == '__main__':
    main()