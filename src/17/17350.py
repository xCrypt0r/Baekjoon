"""
17350. 2루수 이름이 뭐야

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 108 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    players = [input() for _ in range(int(input()))]

    print('뭐야;' if 'anj' in players else '뭐야?')

if __name__ == '__main__':
    main()
