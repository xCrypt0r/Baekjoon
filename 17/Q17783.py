def main():
    n = int(input())

    print('Bob' if n & 1 else f'Alice\n{n // 2}')

if __name__ == '__main__':
    main()