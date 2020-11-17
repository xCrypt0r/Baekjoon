"""
13484. Tarifa

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    X = int(input())
    res = X
    
    for _ in range(int(input())):
        res += (X - int(input()))

    print(res)

if __name__ == '__main__':
    main()
