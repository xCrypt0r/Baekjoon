"""
5052. 전화번호 목록

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,572 KB
소요 시간: 208 ms
해결 날짜: 2020년 9월 20일
"""

import sys

def main():
    for _ in range(int(input())):
        n = int(input())
        numbers = sorted(sys.stdin.readline().strip() for _ in range(n))

        for i in range(n - 1):
            if numbers[i + 1].startswith(numbers[i]):
                print('NO')

                break
        else:
            print('YES')

if __name__ == '__main__':
    main()