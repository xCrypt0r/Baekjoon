"""
15923. 욱제는 건축왕이야!!

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    N = int(input())
    pos = [tuple(map(int, input().split())) for _ in range(N)]

    pos.append(pos[0])

    perimeter = 0

    for i in range(0, N):
        dx = abs(pos[i + 1][0] - pos[i][0])
        dy = abs(pos[i + 1][1] - pos[i][1])
        perimeter += dx + dy

    print(perimeter)

if __name__ == '__main__':
    main()