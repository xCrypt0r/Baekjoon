"""
16199. 나이 계산하기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    y1, m1, d1 = map(int, input().split())
    y2, m2, d2 = map(int, input().split())
    age = y2 - y1

    print(age - (0 if m1 < m2 or (m1 == m2 and d1 <= d2) else 1), age + 1, age, sep='\n')

if __name__ == '__main__':
    main()
