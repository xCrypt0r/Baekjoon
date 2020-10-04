from sys import stdin

input = stdin.readline

def main():
    prices = sorted([float(input()) for _ in range(int(input()))])

    print(f'{prices[1]:.2f}')

if __name__ == '__main__':
    main()