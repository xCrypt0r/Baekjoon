def main():
    K = int(input())
    D1, D2 = map(int, input().split())

    print(K ** 2 - (((D1 - D2) / 2) ** 2))

if __name__ == '__main__':
    main()