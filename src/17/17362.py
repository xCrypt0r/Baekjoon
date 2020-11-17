"""
17362. 수학은 체육과목 입니다 2

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 13일
"""

def main():
    x = int(input()) % 8

    if x == 1: answer = 1
    elif x in [2, 0]: answer = 2
    elif x in [3, 7]: answer = 3
    elif x in [4, 6]: answer = 4
    elif x == 5: answer = 5

    print(answer)

if __name__ == '__main__':
    main()
