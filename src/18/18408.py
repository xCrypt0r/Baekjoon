"""
18408. 3 つの整数

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    n = list(map(int, input().split()))

    print(1 if n.count(1) > n.count(2) else 2)

if __name__ == '__main__':
    main()
