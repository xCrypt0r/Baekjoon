def main():
    X, Y, N = map(int, input().split())

    for i in range(1, N + 1):
        x = y = False

        if i % X == 0: x = True
        if i % Y == 0: y = True

        print('FizzBuzz' if x and y else 'Fizz' if x else 'Buzz' if y else i)

if __name__ == '__main__':
    main()