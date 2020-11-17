"""
2997. 네 번째 수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    num = sorted(map(int, input().split()))
    d1 = num[1] - num[0]
    d2 = num[2] - num[1]

    if d1 == d2: res = num[2] + d1
    elif d1 > d2: res = num[0] + d2
    else: res = num[1] + d1

    print(res)

if __name__ == '__main__':
    main()