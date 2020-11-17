"""
2947. 나무 조각

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    pieces = [int(x) for x in input().split()]
    length = len(pieces)

    for i in range(1, length):
        for j in range(length - i):
            if pieces[j] > pieces[j + 1]:
                pieces[j], pieces[j + 1] = pieces[j + 1], pieces[j]

                print(*pieces)

if __name__ == '__main__':
    main()