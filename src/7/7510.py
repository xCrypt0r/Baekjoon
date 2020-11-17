"""
7510. 고급 수학

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 88 ms
해결 날짜: 2020년 9월 24일
"""

def main():
    for i in range(1, int(input()) + 1):
        a, b, c = sorted(map(int, input().split()))

        print('Scenario #{}:\n{}\n'.format(i, 'yes' if a ** 2 + b ** 2 == c ** 2 else 'no'))

if __name__ == '__main__':
    main()