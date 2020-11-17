"""
1864. 문어 숫자

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 76 ms
해결 날짜: 2020년 9월 23일
"""

def main():
    octopus = { '-': 0, '\\': 1, '(': 2, '@': 3, '?': 4, '>': 5, '&': 6, '%': 7, '/': -1 }

    while True:
        oct_num = input()

        if oct_num == '#':
            break

        dec = 0
        l = len(oct_num)

        for i in range(l):
            dec += octopus.get(oct_num[i]) * (8 ** (l - i - 1))

        print(dec)

if __name__ == '__main__':
    main()