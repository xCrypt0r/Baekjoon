def main():
    for i in range(1, int(input()) + 1):
        a, b, c = sorted(map(int, input().split()))

        print('Scenario #{}:\n{}\n'.format(i, 'yes' if a ** 2 + b ** 2 == c ** 2 else 'no'))

if __name__ == '__main__':
    main()