"""
15051. Máquina de café

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 20일
"""

def check_time(floor, people):
    time = 0

    for i in range(3):
        time += abs(floor - i) * people[i] * 2

    return time

def main():
    A = [int(input()) for _ in range(3)]
    time = [check_time(i, A) for i in range(3)]

    print(min(time))

if __name__ == '__main__':
    main()
