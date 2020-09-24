from sys import stdin

input = stdin.readline

def main():
    for _ in range(int(input())):
        x1, y1, f1, x2, y2, f2 = map(int, input().split())

        print(f1 + f2 + abs(x2 - x1) + abs(y2 - y1))

if __name__ == '__main__':
    main()