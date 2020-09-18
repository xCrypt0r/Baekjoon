def main():
    for _ in range(int(input())):
        n = int(input())
        pairs = []

        for i in range(1, n // 2 + (1 if n & 1 else 0)):
            pairs.append('{} {}'.format(i, n - i))

        print('Pairs for {}: {}'.format(n, ', '.join(pairs)))

if __name__ == '__main__':
    main()
