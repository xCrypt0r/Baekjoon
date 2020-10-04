def main():
    input()

    helmets = map(int, input().split())
    vests = map(int, input().split())

    print(max(helmets) + max(vests))

if __name__ == '__main__':
    main()