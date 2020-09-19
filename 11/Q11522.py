def main():
    for _ in range(int(input())):
        K, N  = map(int, input().split())

        print(f'{K} {N * (N + 1) // 2} {N ** 2} {N * (N + 1)}')

if __name__ == '__main__':
    main()
