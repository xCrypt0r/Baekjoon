"""
10406. The fellowship of the ring

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    W, N, P = map(int, input().split())
    H = [h for h in map(int, input().split()) if W <= h <= N]

    print(len(H))

if __name__ == '__main__':
    main()
