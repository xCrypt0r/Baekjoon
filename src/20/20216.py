"""
20216. Ducky Debugging

작성자: xCrypt0r
언어: Python 3
사용 메모리: 13,672 KB
소요 시간: 12 ms
해결 날짜: 2020년 12월 5일
"""

from sys import stdin, stdout

input = stdin.readline

def main():
    while True:
        s = input().rstrip()
    
        if s == 'I quacked the code!':
            break
    
        try:
            print('*Nod*' if s[-1] == '.' else 'Quack!')
        except:
            pass
    
        stdout.flush()

if __name__ == '__main__':
    main()
