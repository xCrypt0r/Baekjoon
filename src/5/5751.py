"""
5751. Head or Tail

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,532 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    while True:
        N = int(input())

        if not N:
            break

        R = list(map(int, input().split()))

        print(f'Mary won {R.count(0)} times and John won {R.count(1)} times')

if __name__ == '__main__':
    main()
