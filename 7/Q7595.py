def main():
    while True:
        n = int(input())

        if n == 0:
            break

        for i in range(1, n + 1):
            print('*' * i)

if __name__ == '__main__':
    main()
