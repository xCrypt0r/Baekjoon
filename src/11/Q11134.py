def main():
    for _ in range(int(input())):
        N, C = map(int, input().split())

        print(N // C + 1 if N % C else N // C)

if __name__ == '__main__':
    main()
