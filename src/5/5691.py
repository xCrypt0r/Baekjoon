"""
5691. 평균 중앙값 문제

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 16일
"""

def main():
    while True:
        A, B = map(int, input().split())

        if A == 0 and B == 0:
            break

        print(A * 2 - B)

if __name__ == '__main__':
    main()
