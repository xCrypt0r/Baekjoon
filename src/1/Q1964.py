def main():
    N = int(input())

    print((N * (N - 1) * 3 // 2 + N * 4 + 1) % 45678)

if __name__ == '__main__':
    main()