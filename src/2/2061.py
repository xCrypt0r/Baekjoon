"""
2061. 좋은 암호

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,088 KB
소요 시간: 312 ms
해결 날짜: 2020년 12월 1일
"""

def main():
    K, L = map(int, input().split())

    for i in range(2, L):
        if K % i == 0:
            print('BAD', i)

            break;
    else:
        print('GOOD')

if __name__ == '__main__':
    main()