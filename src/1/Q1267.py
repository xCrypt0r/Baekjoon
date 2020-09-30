def main():
    input()

    seconds = list(map(int, input().split()))
    y, m = 0, 0

    for s in seconds:
        y += s // 30 * 10 + 10
        m += s // 60 * 15 + 15

    print(f'Y {y}' if y < m else f'M {m}' if y > m else f'Y M {y}')

if __name__ == '__main__':
    main()