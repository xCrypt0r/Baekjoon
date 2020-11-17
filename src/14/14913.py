"""
14913. 등차수열에서 항 번호 찾기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    a, d, k = map(int, input().split())

    print('X' if (k - a) % d or (k - a) // d < 0 else (k - a) // d + 1)

if __name__ == '__main__':
    main()