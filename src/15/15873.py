"""
15873. 공백 없는 A+B

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 13일
"""

def main():
    s = input()
    length = len(s)
    res = 0

    if length == 2:
        res = sum(map(int, [s[0], s[1]]))
    elif length == 3:
        if int(s[-1]) == 0:
            res = int(s[0]) + 10
        else:
            res = int(s[-1]) + 10
    else:
        res = 20

    print(res)

if __name__ == '__main__':
    main()
