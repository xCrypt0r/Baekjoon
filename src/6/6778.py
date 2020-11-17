"""
6778. Which Alien?

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    a = int(input())
    e = int(input())

    if a >= 3 and e <= 4: print('TroyMartian')
    if a <= 6 and e >= 2: print('VladSaturnian')
    if a <= 2 and e <= 3: print('GraemeMercurian')

if __name__ == '__main__':
    main()
