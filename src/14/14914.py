from math import gcd

def main():
    a, b = map(int, input().split())
    g = gcd(a, b)

    for i in range(1, g + 1):
        if g % i == 0:
            print('{} {} {}'.format(i, a // i, b // i))

if __name__ == '__main__':
    main()