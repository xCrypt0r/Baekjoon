"""
17356. 욱 제

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    A, B = map(int, input().split())
    M = (B - A) / 400

    print(1 / (1 + pow(10, M)))

if __name__ == '__main__':
    main()
