def main():
    K = int(input().split()[1])
    essay = list(input().split())
    count = 0

    for i in range(len(essay)):
        count += len(essay[i])

        if count > K:
            count = len(essay[i])
            essay[i] = '\n' + essay[i]

    print(*essay)

if __name__ == '__main__':
    main()
