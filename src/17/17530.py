"""
17530. Buffoon

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 440 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    gain = []

    for _ in range(int(input())):
        gain.append(int(input()))

    print('S' if max(gain) == gain[0] else 'N')

if __name__ == '__main__':
    main()
