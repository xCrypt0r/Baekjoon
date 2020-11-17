"""
15781. 헬멧과 조끼

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    input()

    helmets = map(int, input().split())
    vests = map(int, input().split())

    print(max(helmets) + max(vests))

if __name__ == '__main__':
    main()