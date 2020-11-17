"""
17912. License to Launch

작성자: xCrypt0r
언어: Python 3
사용 메모리: 39,448 KB
소요 시간: 104 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    input()

    trash = [int(x) for x in input().split()]

    print(trash.index(min(trash)))

if __name__ == '__main__':
    main()