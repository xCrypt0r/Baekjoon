from math import factorial

def main():
    n, m = map(int, input().split())

    print(factorial(n) // factorial(n - m) // factorial(m))

if __name__ == '__main__':
    main()