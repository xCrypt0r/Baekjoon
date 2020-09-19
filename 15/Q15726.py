def main():
    A, B, C = map(int, input().split())

    print(int(A * B / C if B > C else A / B * C))

if __name__ == '__main__':
    main()