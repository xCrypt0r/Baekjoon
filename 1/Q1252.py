def main():
    n = [int(x, 2) for x in input().split()]

    print(bin(sum(n))[2:])

if __name__ == '__main__':
    main()
