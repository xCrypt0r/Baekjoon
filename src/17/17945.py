from math import sqrt

def main():
    A, B = map(int, input().split())
    x = map(int, sorted(set([-A - sqrt(A ** 2 - B), -A + sqrt(A ** 2 - B)])))

    print(*x)

if __name__ == '__main__':
    main()