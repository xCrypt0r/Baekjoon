"""
14935. FA

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    x = input()

    for _ in range(len(x)):
        x = str(int(x[0]) * len(x))
        
        if len(x) == 1:
            break

    print('FA' if len(x) == 1 else 'NFA')

if __name__ == '__main__':
    main()
