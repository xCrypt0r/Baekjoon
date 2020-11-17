"""
14545. Square

작성자: xCrypt0r
언어: Python 3
사용 메모리: 37,192 KB
소요 시간: 80 ms
해결 날짜: 2020년 9월 19일
"""

def main():
    cache = [0] * 1000001

    for _ in range(int(input())):
        l = int(input())

        for i in range(1, l + 1):
            if not cache[i]:
                cache[i] = cache[i - 1] + i ** 2

        print(cache[l])
                
if __name__ == '__main__':
    main()
