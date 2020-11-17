"""
13118. 뉴턴과 사과

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    pos = list(map(int, input().split()))
    x, y, r = map(int, input().split())

    try:
        print(pos.index(x) + 1)
    except:
        print(0)

if __name__ == '__main__':
    main()