from sys import stdin

input = stdin.readline

def main():
    for i in range(1, int(input()) + 1):
        coef = [int(x) for x in input().split()]
        exponent = coef.pop(0)

        coef.pop()

        coef = [coef[i] * (exponent - i) for i in range(len(coef))]

        coef.insert(0, exponent - 1)

        print(f'Case {i}: {" ".join(map(str, coef))}')

if __name__ ==  '__main__':
    main()