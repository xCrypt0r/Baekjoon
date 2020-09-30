from sys import stdin

input = stdin.readline

def main():
    for i in range(1, int(input()) + 1):
        weights = map(int, input().split())

        print(f'Case #{i}: {max(weights)}')

if __name__ == '__main__':
    main()