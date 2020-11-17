"""
4447. 좋은놈 나쁜놈

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    n = int(input())
    lines = [input() for _ in range(n)]

    for i in range(n):
        line = lines[i].lower()
        gc = line.count('g')
        bc = line.count('b')

        print(f'{lines[i]} is {"GOOD" if gc > bc else "A BADDY" if gc < bc else "NEUTRAL"}')

if __name__ == '__main__':
    main()