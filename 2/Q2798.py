from itertools import combinations

def main():
    N, M = map(int, input().split())
    cards = list(map(int, input().split()))
    res = 0

    for case in combinations(cards, 3):
        csum = sum(case)

        if res < csum <= M:
            res = csum

    print(res)

if __name__ == '__main__':
    main()