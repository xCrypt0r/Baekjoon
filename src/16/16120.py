"""
16120. PPAP

작성자: xCrypt0r
언어: Python 3
사용 메모리: 36,496 KB
소요 시간: 532 ms
해결 날짜: 2021년 10월 31일
"""

def main():
    s = input()
    q = []

    for i in range(len(s)):
        q.append(s[i])

        while len(q) >= 4 and q[-4:] == ['P', 'P', 'A', 'P']:
            del q[-3:]

    print('PPAP' if q == ['P'] else 'NP')

if __name__ == '__main__':
    main()