def main():
    while True:
        N = int(input())

        if not N:
            break

        R = list(map(int, input().split()))

        print(f'Mary won {R.count(0)} times and John won {R.count(1)} times')

if __name__ == '__main__':
    main()
