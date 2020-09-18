def main():
    for _ in range(int(input())):
        count, char = input().split()

        print(char * int(count))

if __name__ == '__main__':
    main()
