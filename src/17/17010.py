"""
17010. Time to Decompress

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 18일
"""

def main():
    for _ in range(int(input())):
        count, char = input().split()

        print(char * int(count))

if __name__ == '__main__':
    main()
