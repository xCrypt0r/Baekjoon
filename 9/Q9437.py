def main():
    while True:
        x = input()

        if x == '0':
            break

        N, P = map(int, x.split())
        lost = sorted([P + 1, N - P, N - P + 1] if P & 1 else [P - 1, N - P + 1, N - P + 2])

        print(*lost)

if __name__ == '__main__':
    main()