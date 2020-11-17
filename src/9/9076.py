"""
9076. 점수 집계

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 16일
"""

def main():
    for _ in range(int(input())):
        score = sorted(map(int, input().split()))

        print(sum(score[1:-1]) if score[-2] - score[1] < 4 else 'KIN')

if __name__ == '__main__':
    main()
