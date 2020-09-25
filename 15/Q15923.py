def main():
    N = int(input())
    pos = [tuple(map(int, input().split())) for _ in range(N)]

    pos.append(pos[0])

    perimeter = 0

    for i in range(0, N):
        dx = abs(pos[i + 1][0] - pos[i][0])
        dy = abs(pos[i + 1][1] - pos[i][1])
        perimeter += dx + dy

    print(perimeter)

if __name__ == '__main__':
    main()