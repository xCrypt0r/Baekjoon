"""
18322. Word Processor

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,200 KB
소요 시간: 72 ms
해결 날짜: 2021년 9월 30일
"""

def main():
    K = int(input().split()[1])
    essay = list(input().split())
    count = 0

    for i in range(len(essay)):
        delta = len(essay[i])

        if count + delta > K:
            print('\n' + essay[i], end='')

            count = delta
        else:
            if count != 0:
                print(' ', end='')

            print(essay[i], end='')

            count += delta

if __name__ == '__main__':
    main()