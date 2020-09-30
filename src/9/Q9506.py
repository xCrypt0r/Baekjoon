from sys import stdin

input = stdin.readline

def main():
    while True:
        n = int(input())

        if n == -1:
            break

        divisors = []

        for i in range(1, n):
            if n % i == 0:
                divisors.append(i)

        if sum(divisors) == n:
            print(f'{n} = {" + ".join(map(str, divisors))}')
        else:
            print(f'{n} is NOT perfect.')

if __name__ == '__main__':
    main()