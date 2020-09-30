def main():
    pieces = [int(x) for x in input().split()]
    length = len(pieces)

    for i in range(1, length):
        for j in range(length - i):
            if pieces[j] > pieces[j + 1]:
                pieces[j], pieces[j + 1] = pieces[j + 1], pieces[j]

                print(*pieces)

if __name__ == '__main__':
    main()