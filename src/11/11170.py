"""
11170. 0의 개수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 2,788 ms
해결 날짜: 2020년 9월 17일
"""

def main():
    for _ in range(int(input())):
        N, M = map(int, input().split())
        count = 0

        for i in range(N, M + 1):
            count += str(i).count('0')

        print(count)

if __name__ == '__main__':
    main()
