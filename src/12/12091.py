"""
12091. 이브이 진화 시키기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    print(['Vaporeon', 'Jolteon', 'Flareon'][(int(input()) + 1) % 3])

if __name__ == '__main__':
    main()