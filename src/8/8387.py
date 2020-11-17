"""
8387. Dyslexia

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,572 KB
소요 시간: 80 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    n = int(input())
    s1, s2 = input(), input()

    print(sum(s1[i] == s2[i] for i in range(n)))

if __name__ == '__main__':
    main()