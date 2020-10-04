def main():
    width = { '0': 4, '1': 2 }

    while True:
        N = input()

        if N == '0':
            break

        w = 0

        for n in N:
            w += width.get(n, 3)

        print(w + 1 + len(N))

if __name__ == '__main__':
    main()
