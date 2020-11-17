"""
16479. 컵라면 측정하기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    K = int(input())
    D1, D2 = map(int, input().split())

    print(K ** 2 - (((D1 - D2) / 2) ** 2))

if __name__ == '__main__':
    main()