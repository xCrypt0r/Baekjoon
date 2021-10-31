"""
21567. 숫자의 개수 2

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,200 KB
소요 시간: 72 ms
해결 날짜: 2021년 10월 31일
"""

def main():
    A = int(input())
    B = int(input())
    C = int(input())
    temp = str(A * B * C)

    for i in range(10):
        print(temp.count(str(i)))

if __name__ == '__main__':
    main()