"""
1568. 새

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 16일
"""

def main():
    N = int(input())
    elapsed = 0
    num = 1

    while N > 0:
        if N < num:
            num = 1

        N -= num
        num += 1
        elapsed += 1

    print(elapsed)

if __name__ == '__main__':
    main()