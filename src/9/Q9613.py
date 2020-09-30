from math import gcd
from itertools import combinations

def main():
    for _ in range(int(input())):
        num = [int(x) for x in input().split()][1:]
        res = 0

        for x, y in combinations(num, 2):
            res += gcd(x, y)

        print(res)

if __name__ == '__main__':
    main()