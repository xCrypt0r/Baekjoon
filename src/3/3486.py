"""
3486. Adding Reversed Numbers

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 1,112 ms
해결 날짜: 2020년 9월 23일
"""

def main():
    for _ in range(int(input())):
        print(int(str(sum(int(x[::-1]) for x in input().split()))[::-1]))

if __name__ == '__main__':
    main()