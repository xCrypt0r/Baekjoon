def count_divisors(n):
    divisors = [i for i in range(1, n + 1) if not n % i]

    return len(divisors)

def main():
    for _ in range(int(input())):
        n = int(input())

        print(f'{n} {count_divisors(n)}')

if __name__ == '__main__':
    main()
