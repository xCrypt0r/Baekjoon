"""
15096. Batter Up

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    input()

    bats = map(int, input().split())
    res = list(filter(lambda x: x != -1, bats))

    print(sum(res) / len(res))

if __name__ == '__main__':
    main()