def main():
    N = int(input())
    words = [input() for _ in range(N)]

    for i in range(N):
        for j in range(i, N):
            if words[i][::-1] == words[j]:
                print(len(words[i]), words[i][len(words[i]) // 2])

if __name__ == '__main__':
    main()