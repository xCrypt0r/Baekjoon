"""
11319. Count Me In

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 18일
"""

def main():
    for _ in range(int(input())):
        s = input().lower()
        consonants, vowels = 0, 0

        for c in s:
            if c in 'aeiou':
                vowels += 1
            elif not c == ' ':
                consonants += 1

        print('{} {}'.format(consonants, vowels))

if __name__ == '__main__':
    main()
