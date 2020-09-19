def main():
    while True:
        n = int(input())

        if n == -1:
            break

        prev = 0
        distance = 0

        for _ in range(n):
            s, t = map(int, input().split())
            distance += s * (t - prev)
            prev = t

        print(f'{distance} miles')

if __name__ == '__main__':
    main()
