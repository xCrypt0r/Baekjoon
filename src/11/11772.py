def main():
    N = int(input())
    numbers = []
    pots = []

    for _ in range(N):
        P = input()

        numbers.append(int(P[0:-1]))
        pots.append(int(P[-1]))

    print(sum([numbers[i] ** pots[i] for i in range(N)]))

if __name__ == '__main__':
    main()
