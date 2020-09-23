def main():
    a = [2 ** x for x in range(31)]
    N = int(input())

    print(1 if N in a else 0)

if __name__ == '__main__':
    main()