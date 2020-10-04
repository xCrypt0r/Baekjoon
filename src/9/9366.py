import sys

def main():
    for i in range(1, int(input()) + 1):
        A, B, C = sorted(map(int, sys.stdin.readline().split()))

        if A + B <= C:
            print(f'Case #{i}: invalid!')
        else:
            res = 'equilateral' if A == B == C else ('isosceles' if A == B or B == C or C == A else 'scalene')

            print(f'Case #{i}: {res}')

if __name__ == '__main__':
    main()