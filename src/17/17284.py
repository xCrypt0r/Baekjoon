"""
17284. Vending Machine

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 23일
"""

def main():
    orders = map(int, input().split())
    money = 5000

    for order in orders:
        if order == 1: money -= 500
        elif order == 2: money -= 800
        elif order == 3: money -= 1000

    print(money)

if __name__ == '__main__':
    main()