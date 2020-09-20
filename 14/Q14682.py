def main():
    N, k = [int(input()) for _ in range(2)]
    res = N

    for _ in range(k):
        N *= 10
        res += N

    print(res)

if __name__ == '__main__':
    main()