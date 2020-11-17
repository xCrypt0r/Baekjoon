"""
15080. Every Second Counts

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    start = list(map(int, input().split(' : ')))
    end = list(map(int, input().split(' : ')))
    coef = [3600, 60, 1]
    elapsed = sum([(end[i] - start[i]) * coef[i] for i in range(3)])

    if elapsed < 0: elapsed += 24 * 3600

    print(elapsed)

if __name__ == '__main__':
    main()
