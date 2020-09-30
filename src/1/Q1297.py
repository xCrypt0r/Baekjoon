def main():
    d, h, w = map(int, input().split())

    hk = pow(d ** 2 * h ** 2 // (h ** 2 + w ** 2), 0.5)
    wk = pow(d ** 2 * w ** 2 // (h ** 2 + w ** 2), 0.5)

    print(f'{int(hk)} {int(wk)}')

if __name__ == '__main__':
    main()
