"""
1076. 저항

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 84 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    color = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white']
    r = [input() for _ in range(3)]

    print(int(str(color.index(r[0])) + str(color.index(r[1]))) * (10 ** color.index(r[2])))

if __name__ == '__main__':
    main()