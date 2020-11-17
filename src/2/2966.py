"""
2966. 찍기

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 60 ms
해결 날짜: 2020년 9월 26일
"""

def main():
    N, answer = int(input()), input()
    guess = [x[:N] for x in ['ABCABC' * 17, 'BABC' * 25, 'CCAABB' * 17]]
    count = [sum(g[i] == answer[i] for i in range(N)) for g in guess]
    max_count = max(count)

    print(max_count)

    if max_count == count[0]: print('Adrian')
    if max_count == count[1]: print('Bruno')
    if max_count == count[2]: print('Goran')

if __name__ == '__main__':
    main()