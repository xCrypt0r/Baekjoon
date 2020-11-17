"""
16427. Time Limits

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    n, s = map(int, input().split())
    m = map(int, input().split())

    print((max(m) * s - 1) // 1000 + 1)

if __name__ == '__main__':
    main()
