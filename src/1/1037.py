def main():
    input()

    divisors = sorted(map(int, input().split()))

    print(divisors[0] * divisors[-1])

if __name__ == '__main__':
    main()
