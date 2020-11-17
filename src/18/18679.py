"""
18679. Banana

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 80 ms
해결 날짜: 2020년 9월 16일
"""

def main():
    translator = {}

    for _ in range(int(input())):
        line = list(input().split(' = '))
        translator[line[0]] = line[1]

    for _ in range(int(input())):
        res = []

        input()

        for word in input().split():
            res.append(translator[word])

        print(*res, sep=' ')

if __name__ == '__main__':
    main()
