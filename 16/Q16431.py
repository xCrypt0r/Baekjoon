def main():
    Br, Bc = map(int, input().split())
    Dr, Dc = map(int, input().split())
    Jr, Jc = map(int, input().split())

    B =  max(abs(Jr - Br), abs(Jc - Bc))
    D = abs(Jr - Dr) + abs(Jc - Dc)

    print('bessie' if B < D else ('daisy' if B > D else 'tie'))

if __name__ == '__main__':
    main()
