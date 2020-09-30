def main():
    input()

    trash = [int(x) for x in input().split()]

    print(trash.index(min(trash)))

if __name__ == '__main__':
    main()