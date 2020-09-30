def main():
    for _ in range(int(input())):
        print(sum([i for i in range(1, int(input()) + 1) if i & 1]))

if __name__ == '__main__':
    main()
