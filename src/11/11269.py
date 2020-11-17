"""
11269. Cryptographer’s Conundrum

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    s = input()
    chunks = [s[i:i+3] for i in range(0, len(s), 3)]
    count = 0

    for chunk in chunks:
        count += sum(chunk[i] != 'PER'[i] for i in range(3))

    print(count)

if __name__ == '__main__':
    main()
