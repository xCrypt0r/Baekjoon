"""
15059. Hard choice

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    a = list(map(int, input().split()))
    r = list(map(int, input().split()))
    need = sum([r[i] - a[i] if r[i] > a[i] else 0 for i in range(3)])

    print(need)

if __name__ == '__main__':
    main()
