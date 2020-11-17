"""
6780. Sumac Sequences

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    sumac = [int(input()), int(input())]
    n = 2

    while True:
        sumac.append(sumac[n - 2] - sumac[n - 1])

        if sumac[n] > sumac[n - 1]:
            print(len(sumac))

            break
        else: n += 1

if __name__ == '__main__':
    main()
