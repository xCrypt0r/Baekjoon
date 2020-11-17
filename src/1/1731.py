"""
1731. 추론

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    seq = [int(input()) for _ in range(int(input()))]

    if seq[1] * 2 == seq[0] + seq[2]:
        print(seq[-1] + (seq[1] - seq[0]))
    else:
        print(seq[-1] * (seq[1] // seq[0]))

if __name__ == '__main__':
    main()