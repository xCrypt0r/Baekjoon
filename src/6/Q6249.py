from sys import stdin

input = stdin.readline

def main():
    n, p, h = map(int, input().split())
    prev = p
    highest = h

    for _ in range(n):
        current = int(input())

        if current < prev:
            print(f'NTV: Dollar dropped by {prev - current} Oshloobs')
        elif current > highest:
            highest = current

            print(f'BBTV: Dollar reached {current} Oshloobs, A record!')

        prev = current

if __name__ == '__main__':
    main()