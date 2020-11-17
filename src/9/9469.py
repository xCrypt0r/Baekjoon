"""
9469. 폰 노이만

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    for _ in range(int(input())):
        N, D, A, B, F = map(float, input().split())

        print(int(N), D / (A + B) * F)

if __name__ == '__main__':
    main()