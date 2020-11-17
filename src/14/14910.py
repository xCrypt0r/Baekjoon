"""
14910. 오르막

작성자: xCrypt0r
언어: Python 3
사용 메모리: 121,164 KB
소요 시간: 380 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    cx = -1000001

    for x in map(int, input().split()):
        if x < cx:
            print('Bad')

            break

        cx = x
    else:
        print('Good')

if __name__ == '__main__':
    main()