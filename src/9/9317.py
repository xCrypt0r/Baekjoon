"""
9317. Monitor DPI

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 272 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    while True:
        D, RH, RV = map(float, input().split())

        if D == RH == RV == 0:
            break

        W = D * 16 / (337 ** 0.5)
        H = 9 / 16 * W
        DH = RH / W
        DV = RV / H

        print(f'Horizontal DPI: {DH:.2f}\nVertical DPI: {DV:.2f}')

if __name__ == '__main__':
    main()