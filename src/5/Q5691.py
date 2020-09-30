def main():
    while True:
        A, B = map(int, input().split())

        if A == 0 and B == 0:
            break

        print(A * 2 - B)

if __name__ == '__main__':
    main()
