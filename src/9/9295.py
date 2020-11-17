"""
9295. 주사위

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 144 ms
해결 날짜: 2020년 9월 21일
"""

def main():
    for i in range(1, int(input()) + 1):
        print(f'Case {i}: {sum(map(int, input().split()))}')

if __name__ == '__main__':
    main()
