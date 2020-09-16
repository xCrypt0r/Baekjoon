def sum_digits(num, base):
    res = 0

    while num > 0:
        res += num % base
        num //= base

    return res

def main():
    for i in range(1000, 10000):
        x = sum_digits(i, 10)
        y = sum_digits(i, 12)
        z = sum_digits(i, 16)

        if x == y == z:
            print(i)

if __name__ == '__main__':
    main()