"""
1759. 암호 만들기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 13일
"""

from itertools import combinations

def main():
    L, C = map(int, input().split())
    used = sorted(list(map(str, input().split())))
    passwords = combinations(used, L)

    for password in passwords:
        count = 0

        for letter in password:
            if letter in 'aeiou':
                count += 1

        if (count >= 1 and count <= L - 2):
            print(''.join(password))

if __name__ == '__main__':
    main()
