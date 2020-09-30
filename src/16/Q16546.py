def main():
    runners = [0] * int(input())

    for i in input().split():
        runners[int(i) - 1] = 1

    print(runners.index(0) + 1)

if __name__ == '__main__':
    main()