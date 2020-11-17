"""
2941. 크로아티아 알파벳

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 80 ms
해결 날짜: 2020년 9월 23일
"""

def main():
    croatian = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
    s = input()

    for c in croatian:
        s = s.replace(c, '.')

    print(len(s))

if __name__ == '__main__':
    main()