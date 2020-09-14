def main():
    n = list(map(int, input().split()))

    print(1 if n.count(1) > n.count(2) else 2)

if __name__ == '__main__':
    main()
