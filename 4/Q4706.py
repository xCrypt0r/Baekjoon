def main():
    while True:
        A, B = map(float, input().split())

        if A == B == 0:
            break

        print(f'{((1 - (B / A) ** 2) ** 0.5):.3f}')

if __name__ == '__main__':
    main()
