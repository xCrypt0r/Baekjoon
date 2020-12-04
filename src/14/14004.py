"""
14004. ICPC

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,088 KB
소요 시간: 68 ms
해결 날짜: 2020년 12월 4일
"""

def main():
    A, B, C, D = map(int, input().split())

    print((C + D) // (A - B))

if __name__ == '__main__':
    main()