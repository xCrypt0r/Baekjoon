def main():
    while True:
        n = int(input())

        if n == -1:
            break

        distance = 0
        prev = 0

        for _ in range(n):
            speed, time = map(int, input().split())
            distance += speed * (time - prev)
            prev = time

        print(f'{distance} miles')

if __name__ == '__main__':
    main()
