from math import gcd

def main():
    A, B = map(int, input().split())

    print('1' * gcd(A, B))

if __name__ == '__main__':
    main()