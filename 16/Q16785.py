def main():
    A, B, C = map(int, input().split())

    for i in range(1, C + 1):
        if C <= A * i + i // 7 * B:
            print(i)

            break

if __name__ == '__main__':
    main()
