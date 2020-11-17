"""
14909. 양수 개수 세기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 121,388 KB
소요 시간: 472 ms
해결 날짜: 2020년 9월 22일
"""

def main():
    print(sum(int(x) > 0 for x in input().split()))

if __name__ == '__main__':
    main()
