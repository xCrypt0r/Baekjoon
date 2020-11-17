"""
4766. 일반 화학 실험

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 21일
"""

def main():
    a = float(input())

    while True:
        temp = float(input())

        if temp == 999:
            break

        print(f'{(temp - a):.2f}')

        a = temp

if __name__ == '__main__':
    main()
