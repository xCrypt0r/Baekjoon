"""
16445. Desvendando Monty Hall

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 472 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    count = 0

    for _ in range(int(input())):
        if int(input()) > 1:
            count += 1

    print(count)

if __name__ == '__main__':
    main()
