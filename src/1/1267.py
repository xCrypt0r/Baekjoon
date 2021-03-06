"""
1267. 핸드폰 요금

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    input()

    seconds = list(map(int, input().split()))
    y, m = 0, 0

    for s in seconds:
        y += s // 30 * 10 + 10
        m += s // 60 * 15 + 15

    print(f'Y {y}' if y < m else f'M {m}' if y > m else f'Y M {y}')

if __name__ == '__main__':
    main()