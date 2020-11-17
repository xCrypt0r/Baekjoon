"""
17256. 달달함이 넘쳐흘러

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    a = [int(x) for x in input().split()]
    c = [int(x) for x in input().split()]
    
    print(abs(c[0] - a[2]), c[1] // a[1], abs(c[2] - a[0]))

if __name__ == '__main__':
    main()
