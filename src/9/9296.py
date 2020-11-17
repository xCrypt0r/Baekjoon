"""
9296. Grading Exams

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 240 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    for i in range(1, int(input()) + 1):
        L = int(input())
        answer, guess = input(), input()

        print(f'Case {i}: {sum(answer[i] != guess[i] for i in range(L))}')

if __name__ == '__main__':
    main()