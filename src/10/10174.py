"""
10174. 팰린드롬

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    for _ in range(int(input())):
        s = input().lower()

        for i in range(len(s) // 2):
            if s[i] != s[len(s) - i - 1]:
                print('No')

                break
        else:
            print('Yes')

if __name__ == '__main__':
    main()