"""
1037. 약수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    input()

    divisors = sorted(map(int, input().split()))

    print(divisors[0] * divisors[-1])

if __name__ == '__main__':
    main()
