from sys import stdin

input = stdin.readline

def main():
    while True:
        a, b, c, d = map(int, input().split())

        if a == b == c == d == 0:
            break

        count = 0

        while not a == b == c == d:
            a, b, c, d = map(abs, [a - b, b - c, c - d, d - a])
            count += 1

        print(count)

if __name__ ==  '__main__':
    main()