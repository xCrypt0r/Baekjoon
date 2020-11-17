"""
13698. Hawk eyes

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 22일
"""

def main():
    cups = [1, 0, 0, 2]

    for action in input():
        if action == 'A': cups[0], cups[1] = cups[1], cups[0]
        elif action == 'B': cups[0], cups[2] = cups[2], cups[0]
        elif action == 'C': cups[0], cups[3] = cups[3], cups[0]
        elif action == 'D': cups[1], cups[2] = cups[2], cups[1]
        elif action == 'E': cups[1], cups[3] = cups[3], cups[1]
        elif action == 'F': cups[2], cups[3] = cups[3], cups[2]

    print(cups.index(1) + 1, cups.index(2) + 1, sep='\n')

if __name__ == '__main__':
    main()
