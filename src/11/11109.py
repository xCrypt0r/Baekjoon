"""
11109. 괴짜 교수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 148 ms
해결 날짜: 2020년 9월 21일
"""

def main():
    for _ in range(int(input())):
        d, n, s, p = map(int, input().split())
        tp = d + n * p
        ts = n * s

        print('do not parallelize' if tp > ts else ('parallelize' if tp < ts else 'does not matter'))

if __name__ == '__main__':
    main()
