"""
5054. 주차의 신

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 16일
"""

def main():
    for _ in range(int(input())):
        input()

        pos = sorted(map(int, input().split()))

        print((pos[-1] - pos[0]) * 2)

if __name__ == '__main__':
    main()
