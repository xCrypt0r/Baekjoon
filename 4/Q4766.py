def main():
    a = float(input())

    while True:
        temp = float(input())

        if temp == 999:
            break

        print(f'{(temp - a):.2f}')

        a = temp

if __name__ == '__main__':
    main()
