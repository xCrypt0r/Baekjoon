"""
11131. Balancing Weights

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 80 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    for _ in range(int(input())):
        input()
        
        res = sum(map(int, input().split()))

        print('Right' if res > 0 else ('Left' if res < 0 else 'Equilibrium'))

if __name__ == '__main__':
    main()
