def main():
    SKH = list(map(int, input().split()))

    if sum(SKH) >= 100: print('OK')
    else: print(['Soongsil', 'Korea', 'Hanyang'][SKH.index(min(SKH))])

if __name__ == '__main__':
    main()

