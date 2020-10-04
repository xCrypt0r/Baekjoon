def main():
    N = int(input())

    if N == 0:
        print('divide by zero')
    else:
        time = list(map(int, input().split()))

        if sum(time) == 0:
            print('divide by zero')
        else:
            print('1.00')

if __name__ == '__main__':
    main()
