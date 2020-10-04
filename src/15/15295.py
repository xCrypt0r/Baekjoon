from sys import stdin

input = stdin.readline

def main():
    for _ in range(int(input())):
        i, N = map(int, input().split())

        print(f'{i} {N * (N + 3) // 2}')

if __name__ == '__main__':
    main()