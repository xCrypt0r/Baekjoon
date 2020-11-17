"""
10480. Oddities

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    for _ in range(int(input())):
        x = int(input())

        print(f'{x} is {"odd" if x & 1 else "even"}')

if __name__ == '__main__':
    main() 
