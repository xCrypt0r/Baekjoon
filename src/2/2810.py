"""
2810. 컵홀더

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    N = int(input())
    seats = input()

    print(len(seats.replace('LL', 'S')) + 1 if seats.count('LL') else N)

if __name__ == '__main__':
    main()