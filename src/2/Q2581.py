from math import sqrt

def main():
    M, N = map(int, [input(), input()])
    primes = []

    for i in range(M, N + 1):
        if i == 1:
            pass
        else:
            for j in range(2, int(sqrt(i)) + 1):
                if i % j == 0:
                    break
            else:
                primes.append(i)

    print(-1 if not primes else f'{sum(primes)}\n{primes[0]}')

if __name__ == '__main__':
    main()