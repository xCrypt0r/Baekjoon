"""
16170. 오늘의 날짜는?

작성자: xCrypt0r
언어: Python 3
사용 메모리: 34,804 KB
소요 시간: 88 ms
해결 날짜: 2020년 9월 13일
"""

from datetime import datetime, timedelta

def main();
    time = datetime.now() + timedelta(hours=9)

    print(time.year, time.month, time.day, sep='\n')

if __name__ == '__main__':
    main()
