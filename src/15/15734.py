"""
15734. 명장 남정훈

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    L, R, A = map(int, input().split())

    print(min(L + A, R + A, (L + R + A) // 2) * 2)

if __name__ == '__main__':
    main()