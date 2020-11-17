"""
2959. 거북이

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 22일
"""

def main():
    sides = sorted(map(int, input().split()))

    print(sides[0] * sides[2])

if __name__ == '__main__':
    main()
