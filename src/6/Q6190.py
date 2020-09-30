def main():
    N = int(input())
    score = 0

    while N != 1:
        N = N * 3 + 1 if N & 1 else N // 2
        score += 1

    print(score)

if __name__ == '__main__':
    main()
