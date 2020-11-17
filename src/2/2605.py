"""
2605. 줄 세우기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    N = int(input())
    numbers = list(map(int, input().split()))
    lines = [x + 1 for x in range(N)]

    for i in range(1, N):
        l = lines.pop(i)

        lines.insert(i - numbers[i], l)

    print(*lines)

if __name__ == '__main__':
    main()