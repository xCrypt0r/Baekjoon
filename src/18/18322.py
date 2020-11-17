"""
18322. Word Processor

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    K = int(input().split()[1])
    essay = list(input().split())
    count = 0

    for i in range(len(essay)):
        count += len(essay[i])

        if count > K:
            count = len(essay[i])
            essay[i] = '\n' + essay[i]

    print(*essay)

if __name__ == '__main__':
    main()
