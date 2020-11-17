"""
4706. 쌍둥이 역설

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 21일
"""

def main():
    while True:
        A, B = map(float, input().split())

        if A == B == 0:
            break

        print(f'{((1 - (B / A) ** 2) ** 0.5):.3f}')

if __name__ == '__main__':
    main()
