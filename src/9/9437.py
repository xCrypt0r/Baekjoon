"""
9437. 사라진 페이지 찾기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    while True:
        x = input()

        if x == '0':
            break

        N, P = map(int, x.split())
        lost = sorted([P + 1, N - P, N - P + 1] if P & 1 else [P - 1, N - P + 1, N - P + 2])

        print(*lost)

if __name__ == '__main__':
    main()