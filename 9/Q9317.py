def main():
    while True:
        D, RH, RV = map(float, input().split())

        if D == RH == RV == 0:
            break

        W = D * 16 / (337 ** 0.5)
        H = 9 / 16 * W
        DH = RH / W
        DV = RV / H

        print(f'Horizontal DPI: {DH:.2f}\nVertical DPI: {DV:.2f}')

if __name__ == '__main__':
    main()