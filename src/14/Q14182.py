def main():
    while True:
        income = int(input())

        if not income:
            break

        if income <= 1000000: res = income
        elif 1000000 < income <= 5000000: res = income * 0.9
        elif income > 5000000: res = income * 0.8

        print(int(res))

if __name__ == '__main__':
    main()
