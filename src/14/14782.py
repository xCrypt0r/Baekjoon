def main():
    I = int(input())
    divisors = []

    for i in range(1, I + 1):
        if not I % i:
            divisors.append(i)

    print(sum(divisors))

if __name__ == '__main__':
    main()