"""
14182. Tax

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    while True:
        income = int(input())

        if not income:
            break

        if income <= 1000000: res = income
        elif 1000000 < income <= 5000000: res = income * 0.9
        elif income > 5000000: res = income * 0.8

        print(int(res))

if __name__ == '__main__':
    main()
