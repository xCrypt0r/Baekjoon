"""
10395. Automated Checking Machine

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    X = [int(x) for x in input().split()]
    Y = [int(y) for y in input().split()]

    for i in range(5):
        if X[i] + Y[i] != 1:
            print('N')

            break
    else:
        print('Y')

if __name__ == '__main__':
    main()