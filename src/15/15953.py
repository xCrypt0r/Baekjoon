"""
15953. 상금 헌터

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 160 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    for _ in range(int(input())):
        a, b = map(int, input().split())
        money = 0

        if a == 1: money += 5000000
        elif 2 <= a <= 3: money += 3000000
        elif 4 <= a <= 6: money += 2000000
        elif 7 <= a <= 10: money += 500000
        elif 11 <= a <= 15: money += 300000
        elif 16 <= a <= 21: money += 100000

        if b == 1: money += 5120000
        elif 2 <= b <= 3: money += 2560000
        elif 4 <= b <= 7: money += 1280000
        elif 8 <= b <= 15: money += 640000
        elif 16 <= b <= 31: money += 320000

        print(money)

if __name__ == '__main__':
    main()