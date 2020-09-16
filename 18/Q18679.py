def main():
    translator = {}

    for _ in range(int(input())):
        line = list(input().split(' = '))
        translator[line[0]] = line[1]

    for _ in range(int(input())):
        res = []

        input()

        for word in input().split():
            res.append(translator[word])

        print(*res, sep=' ')

if __name__ == '__main__':
    main()
