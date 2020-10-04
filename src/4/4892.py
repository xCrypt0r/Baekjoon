def main():
    i = 0

    while True:
        i += 1
        n0 = int(input())

        if n0 == 0:
            break

        n1 = n0 * 3
        n2 = (n1 + 1) // 2 if n1 & 1 else n1 // 2
        n3 = n2 * 3
        n4 = n3 // 9

        print('{}. {} {}'.format(i, 'odd' if n1 & 1 else 'even', n4))

if __name__ == '__main__':
    main()
