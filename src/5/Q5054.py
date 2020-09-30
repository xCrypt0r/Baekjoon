def main():
    for _ in range(int(input())):
        input()

        pos = sorted(map(int, input().split()))

        print((pos[-1] - pos[0]) * 2)

if __name__ == '__main__':
    main()
