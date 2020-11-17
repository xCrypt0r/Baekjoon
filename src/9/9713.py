"""
9713. Sum of Odd Sequence

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 18일
"""

def main():
    for _ in range(int(input())):
        print(sum([i for i in range(1, int(input()) + 1) if i & 1]))

if __name__ == '__main__':
    main()
