"""
10813. 공 바꾸기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 16일
"""

def main():
    N, M = map(int, input().split())
    balls = [i + 1 for i in range(N)]

    for _ in range(M):
        i, j = map(int, input().split())
        balls[i - 1], balls[j - 1] = balls[j - 1], balls[i - 1]

    print(*balls, sep=' ')

if __name__ == '__main__':
    main()
