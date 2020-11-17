"""
14581. 팬들에게 둘러싸인 홍준

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 16일
"""

def main():
    fan = ':fan:'

    print(*[fan + fan + fan, fan + ':%s:' % input() + fan, fan + fan + fan], sep='\n')

if __name__ == '__main__':
    main()
