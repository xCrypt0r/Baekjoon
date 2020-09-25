def main():
    N = int(input())
    numbers = list(map(int, input().split()))
    lines = [x + 1 for x in range(N)]

    for i in range(1, N):
        l = lines.pop(i)

        lines.insert(i - numbers[i], l)

    print(*lines)

if __name__ == '__main__':
    main()