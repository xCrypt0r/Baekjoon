import sys

def main():
    price = [350.34, 230.90, 190.55, 125.30, 180.90]

    for _ in range(int(input())):
        amount = map(float, sys.stdin.readline().split())
        res = sum([p * a for (p, a) in zip(price, amount)])

        print(f'${res:.2f}')

if __name__ == '__main__':
    main()