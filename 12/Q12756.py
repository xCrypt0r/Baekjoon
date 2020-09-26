def main():
    att1, hp1 = map(int, input().split())
    att2, hp2 = map(int, input().split())

    while hp1 > 0 and hp2 > 0:
        hp1 -= att2
        hp2 -= att1

    print('DRAW' if hp1 < 1 and hp2 < 1 else 'PLAYER A' if hp1 > hp2 else 'PLAYER B')

if __name__ == '__main__':
    main()