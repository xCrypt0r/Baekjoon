"""
18409. 母音を数える

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    input()
    print(sum(map(input().count, 'aeiou')))

if __name__ == '__main__':
    main()
