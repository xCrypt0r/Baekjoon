def main():
    for _ in range(int(input())):
        d = int(input())

        for i in range(d + 1):
            if i + i ** 2 > d:
                print(i - 1)

                break

if __name__ == '__main__':
    main()
