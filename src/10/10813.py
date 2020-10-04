def main():
    N, M = map(int, input().split())
    balls = [i + 1 for i in range(N)]

    for _ in range(M):
        i, j = map(int, input().split())
        balls[i - 1], balls[j - 1] = balls[j - 1], balls[i - 1]

    print(*balls, sep=' ')

if __name__ == '__main__':
    main()
