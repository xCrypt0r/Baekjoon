def main():
    right = range(1, int(input()) + 1)
    order = [int(x) for x in input().split()]
    count = 0

    for i in range(len(right)):
        if order[i] != right[i]:
            count += 1

    print(count)

if __name__ == '__main__':
    main()