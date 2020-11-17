"""
14491. 9진수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 23일
"""

def main():
    T = int(input())
    res = 0
    count = 0

    while T > 0:
        res += T % 9 * (10 ** count)
        T //= 9
        count += 1

    print(res)

if __name__ == '__main__':
    main()