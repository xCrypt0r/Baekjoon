def main():
    L, R, A = map(int, input().split())

    print(min(L + A, R + A, (L + R + A) // 2) * 2)

if __name__ == '__main__':
    main()