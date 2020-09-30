from math import sqrt

def main():
    N, W, H = map(int, input().split())
    diagonal = int(sqrt(W ** 2 + H ** 2))

    for _ in range(N):
        print('YES' if int(input()) <= diagonal else 'NO')

if __name__ == '__main__':
    main()
