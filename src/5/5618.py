from math import gcd

def main():
    input()

    num = [int(x) for x in input().split()]
    g = gcd(num[0], gcd(num[1], num[-1]))

    for i in range(1, g // 2 + 1):
        if not g % i:
            print(i)

    print(g)

if __name__ == '__main__':
    main()