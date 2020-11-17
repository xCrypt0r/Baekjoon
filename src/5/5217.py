"""
5217. 쌍의 합

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 18일
"""

def main():
    for _ in range(int(input())):
        n = int(input())
        pairs = []

        for i in range(1, n // 2 + (1 if n & 1 else 0)):
            pairs.append('{} {}'.format(i, n - i))

        print('Pairs for {}: {}'.format(n, ', '.join(pairs)))

if __name__ == '__main__':
    main()
