import sys

def main():
    while True:
        A, B, C = sorted(map(int, sys.stdin.readline().split()))

        if A == B == C == 0:
            break

        if A + B <= C:
            print('Invalid')
        else:
            print('Equilateral' if A == B == C else ('Isosceles' if A == B or B == C or C == A else 'Scalene'))

if __name__ == '__main__':
    main()