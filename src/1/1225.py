"""
1225. 이상한 곱셈

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    A, B = map(str, input().split(' '))

    print(sum(int(a) for a in A) * sum(int(b) for b in B))

if __name__ == '__main__':
    main()