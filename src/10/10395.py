def main():
    X = [int(x) for x in input().split()]
    Y = [int(y) for y in input().split()]

    for i in range(5):
        if X[i] + Y[i] != 1:
            print('N')

            break
    else:
        print('Y')

if __name__ == '__main__':
    main()