"""
14656. 조교는 새디스트야!!

작성자: xCrypt0r
언어: Python 3
사용 메모리: 30,524 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    right = range(1, int(input()) + 1)
    order = [int(x) for x in input().split()]
    count = 0

    for i in range(len(right)):
        if order[i] != right[i]:
            count += 1

    print(count)

if __name__ == '__main__':
    main()