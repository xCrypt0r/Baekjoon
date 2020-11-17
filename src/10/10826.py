"""
10826. 피보나치 수 4

작성자: xCrypt0r
언어: Python 3
사용 메모리: 32,980 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 17일
"""

def main():
    n = int(input())
    fibonacci = [0, 1]

    for i in range(2, n + 1):
        fibonacci.append(fibonacci[i - 1] + fibonacci[i - 2])

    print(fibonacci[n])

if __name__ ==  '__main__':
    main()