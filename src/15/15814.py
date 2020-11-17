"""
15814. 야바위 대장

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    S = list(input())

    for _ in range(int(input())):
        A, B = map(int, input().split())
        S[A], S[B] = S[B], S[A]

    print(''.join(S))

if __name__ == '__main__':
    main()