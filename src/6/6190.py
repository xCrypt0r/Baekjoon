"""
6190. Another Cow Number Game

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    N = int(input())
    score = 0

    while N != 1:
        N = N * 3 + 1 if N & 1 else N // 2
        score += 1

    print(score)

if __name__ == '__main__':
    main()
