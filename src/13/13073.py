def main():
    for _ in range(int(input())):
        N = int(input())

        print(f'{N * (N + 1) // 2} {N ** 2} {N * (N + 1)}')

if __name__ == '__main__':
    main()
