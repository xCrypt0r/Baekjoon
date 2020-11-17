"""
13420. 사칙연산

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 92 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    for _ in range(int(input())):
        question, answer = input().split('=')

        print('correct' if eval(question) == int(answer) else 'wrong answer')

if __name__ == '__main__':
    main()
