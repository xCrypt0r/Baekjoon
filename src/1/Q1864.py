def main():
    octopus = { '-': 0, '\\': 1, '(': 2, '@': 3, '?': 4, '>': 5, '&': 6, '%': 7, '/': -1 }

    while True:
        oct_num = input()

        if oct_num == '#':
            break

        dec = 0
        l = len(oct_num)

        for i in range(l):
            dec += octopus.get(oct_num[i]) * (8 ** (l - i - 1))

        print(dec)

if __name__ == '__main__':
    main()