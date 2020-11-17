"""
7581. Cuboids

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 92 ms
해결 날짜: 2020년 9월 14일
"""

def main():
    while True:
        l, w, h, v = map(int, input().split())

        if all(x == 0 for x in [l, w, h, v]): break
        elif l == 0: l = v // w // h
        elif w == 0: w = v // l // h
        elif h == 0: h = v // l // w
        elif v == 0: v = l * w * h

        print(l, w, h, v, sep=' ')

if __name__ == '__main__':
    main()
