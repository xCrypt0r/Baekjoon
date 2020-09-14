def main():
    n=int(input())

    if n % 2 == 1: r = 0
    elif n // 2 % 2 == 0: r = 2
    else: r = 1

    print(r)

if __name__ == '__main__':
    main()
