def main():
    n = int(input())
    l = []

    for i in range(n):
        l.append([j for j in range(n * i + 1, n * (i + 1) + 1)])

    for i, v in enumerate(l):
        print(*(v[::-1] if i & 1 else v), sep=' ')

if __name__ == '__main__':
    main()
