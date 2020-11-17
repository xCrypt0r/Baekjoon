"""
4714. Lunacy

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    while True:
        weight = float(input())

        if weight < 0:
            break

        print(f'Objects weighing {weight:.2f} on Earth will weigh {(weight * 0.167):.2f} on the moon.')

if __name__ == '__main__':
    main()