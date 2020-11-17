"""
15354. Aron

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    prev = ''
    task = 1

    for _ in range(int(input())):
        color = input()

        if color != prev:
            task += 1

        prev = color

    print(task)

if __name__ == '__main__':
    main()
