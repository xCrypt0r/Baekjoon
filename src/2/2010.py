from sys import stdin

input = stdin.readline

def main():
    N = int(input())

    print(sum([int(input()) for _ in range(N)]) - N + 1)

if __name__ == '__main__':
    main()