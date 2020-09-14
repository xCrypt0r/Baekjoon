def main():
    sumac = [int(input()), int(input())]
    n = 2

    while True:
        sumac.append(sumac[n - 2] - sumac[n - 1])

        if sumac[n] > sumac[n - 1]:
            print(len(sumac))

            break
        else: n += 1

if __name__ == '__main__':
    main()
