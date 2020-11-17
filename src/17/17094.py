"""
17094. Serious Problem

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,572 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 18일
"""

def main():
    input()

    s = input()
    count1 = s.count('2')
    count2 = s.count('e')

    print(2 if count1 > count2 else ('e' if count1 < count2 else 'yee'))

if __name__ == '__main__':
    main()
