"""
18142. Tapioka

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 20일
"""

def main():
    arr = list(input().split())
    needle = ['bubble', 'tapioka']
    res = [x for x in arr if not x in needle]

    print('nothing' if not res else ' '.join(res))

if __name__ == '__main__':
    main()
