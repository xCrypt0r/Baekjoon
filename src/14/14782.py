"""
14782. Bedtime Reading, I

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 116 ms
해결 날짜: 2020년 9월 17일
"""

def main():
    I = int(input())
    divisors = []

    for i in range(1, I + 1):
        if not I % i:
            divisors.append(i)

    print(sum(divisors))

if __name__ == '__main__':
    main()