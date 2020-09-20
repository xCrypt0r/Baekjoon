from math import pi

def main():
    A1, P1 = map(int, input().split())
    R1, P2 = map(int, input().split())
    a = [A1 / P1, (R1 ** 2 * pi) / P2]

    print('Whole pizza' if a[0] < a[1] else 'Slice of pizza')

if __name__ == '__main__':
    main()
