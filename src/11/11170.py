def main():
    for _ in range(int(input())):
        N, M = map(int, input().split())
        count = 0

        for i in range(N, M + 1):
            count += str(i).count('0')

        print(count)

if __name__ == '__main__':
    main()
