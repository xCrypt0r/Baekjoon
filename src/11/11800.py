"""
11800. Tawla

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 80 ms
해결 날짜: 2020년 9월 23일
"""

def main():
    alias = { 1 : 'Yakk', 2 : 'Doh', 3 : 'Seh', 4 : 'Ghar', 5 : "Bang", 6 : "Sheesh" }
    alias_same = { 1: "Habb Yakk", 2 : "Dobara", 3 : "Dousa", 4 : "Dorgy", 5 : "Dabash", 6 : "Dosh" }

    for i in range(1, int(input()) + 1):
        a, b = sorted(map(int, input().split()), reverse=True)

        if a == b:
            print(f'Case {i}: {alias_same[a]}')
        elif (a == 5 and b == 6) or (a == 6 and b == 5):
            print(f'Case {i}: Sheesh Beesh')
        else:
            print(f'Case {i}: {alias[a]} {alias[b]}')

if __name__ == '__main__':
    main()