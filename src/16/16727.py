"""
16727. ICPC

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    p1, s1 = map(int, input().split())
    s2, p2 = map(int, input().split())
    p, s = p1 + p2, s1 + s2

    if p == s:
        if p1 > s2: res = 'Esteghlal'
        elif p1 < s2: res = 'Persepolis'
        else: res = 'Penalty'
    elif p > s: res = 'Persepolis'
    else: res = 'Esteghlal'

    print(res)

if __name__ == '__main__':
    main()
