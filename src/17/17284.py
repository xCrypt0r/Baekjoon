def main():
    orders = map(int, input().split())
    money = 5000

    for order in orders:
        if order == 1: money -= 500
        elif order == 2: money -= 800
        elif order == 3: money -= 1000

    print(money)

if __name__ == '__main__':
    main()