from sys import stdin

input = stdin.readline

def main():
    x, y = map(int, input().split())
    md = float('inf')

    for _ in range(int(input())):
        tx, ty = map(int, input().split())
        d = abs(tx - x) + abs(ty - y)

        if d < md:
            md = d
            mx = tx
            my = ty

    print(mx, my)

if __name__ == '__main__':
    main()