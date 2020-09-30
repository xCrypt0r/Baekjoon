def main():
    A, B = map(int, input().split())
    M = (B - A) / 400

    print(1 / (1 + pow(10, M)))

if __name__ == '__main__':
    main()
