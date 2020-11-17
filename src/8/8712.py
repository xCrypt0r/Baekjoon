"""
8712. Wężyk

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 17일
"""

def main():
    n = int(input())
    l = []

    for i in range(n):
        l.append([j for j in range(n * i + 1, n * (i + 1) + 1)])

    for i, v in enumerate(l):
        print(*(v[::-1] if i & 1 else v), sep=' ')

if __name__ == '__main__':
    main()
