"""
14761. FizzBuzz

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    X, Y, N = map(int, input().split())

    for i in range(1, N + 1):
        x = y = False

        if i % X == 0: x = True
        if i % Y == 0: y = True

        print('FizzBuzz' if x and y else 'Fizz' if x else 'Buzz' if y else i)

if __name__ == '__main__':
    main()