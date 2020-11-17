"""
10419. 지각

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 21일
"""

def main():
    for _ in range(int(input())):
        d = int(input())

        for i in range(d + 1):
            if i + i ** 2 > d:
                print(i - 1)

                break

if __name__ == '__main__':
    main()
