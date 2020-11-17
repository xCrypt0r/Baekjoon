"""
17588. Missing Numbers

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 72 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    nums = []

    for _ in range(int(input())):
        nums.append(int(input()))

    missing = [str(i) for i in range(1, nums[-1] + 1) if i not in nums]

    print('good job' if not len(missing) else '\n'.join(missing))
    
if __name__ == '__main__':
    main()
