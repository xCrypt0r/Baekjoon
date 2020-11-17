"""
15921. 수찬은 마린보이야!!

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 13일
"""

def main():
    N = int(input())

    if N == 0:
        print('divide by zero')
    else:
        time = list(map(int, input().split()))

        if sum(time) == 0:
            print('divide by zero')
        else:
            print('1.00')

if __name__ == '__main__':
    main()
