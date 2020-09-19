def main():
    N, M = map(int, input().split())

    for i in range(1, N + 1):
        print(''.join(['.' if (i + j) & 1 else '*' for j in range(1, M + 1)]))

if __name__ == '__main__':
    main()
