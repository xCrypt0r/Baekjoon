"""
14912. 숫자 빈도수

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 104 ms
해결 날짜: 2020년 9월 17일
"""

def main():
    n, d = input().split()
    count = 0

    for i in range(1, int(n) + 1):
        count += str(i).count(d)

    print(count)

if __name__ == '__main__':
    main()