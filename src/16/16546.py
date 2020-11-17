"""
16546. Missing Runners

작성자: xCrypt0r
언어: Python 3
사용 메모리: 31,092 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    runners = [0] * int(input())

    for i in input().split():
        runners[int(i) - 1] = 1

    print(runners.index(0) + 1)

if __name__ == '__main__':
    main()