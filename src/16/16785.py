"""
16785. ソーシャルゲーム

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 208 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    A, B, C = map(int, input().split())

    for i in range(1, C + 1):
        if C <= A * i + i // 7 * B:
            print(i)

            break

if __name__ == '__main__':
    main()
