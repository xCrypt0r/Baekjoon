"""
17520. Balanced String

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,076 KB
소요 시간: 76 ms
해결 날짜: 2020년 12월 12일
"""

def main():
    n = int(input())

    print(2 ** ((n + 1) // 2) % 16769023)

if __name__ == '__main__':
    main()
