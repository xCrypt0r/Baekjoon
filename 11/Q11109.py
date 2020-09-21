def main():
    for _ in range(int(input())):
        d, n, s, p = map(int, input().split())
        tp = d + n * p
        ts = n * s

        print('do not parallelize' if tp > ts else ('parallelize' if tp < ts else 'does not matter'))

if __name__ == '__main__':
    main()
