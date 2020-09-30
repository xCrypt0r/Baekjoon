def main():
    for _ in range(int(input())):
        N, D, A, B, F = map(float, input().split())

        print(int(N), D / (A + B) * F)

if __name__ == '__main__':
    main()