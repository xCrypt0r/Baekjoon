"""
5613. 계산기 프로그램

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 22일
"""

def main():
    res = int(input())

    while True:
        oper = input()

        if oper == '=': break
        
        temp = input()

        if oper == '/': oper = '//'

        res = eval(str(res) + oper + temp)

    print(res)

if __name__ == '__main__':
    main()
