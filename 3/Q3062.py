from sys import stdin

input = stdin.readline

def main():
    for _ in range(int(input())):
        N = input()
        N = str(int(N) + int(N[::-1]))

        print('YES' if N == N[::-1] else 'NO')

if __name__ == '__main__':
    main()