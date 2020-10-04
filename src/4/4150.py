def main():
    n = int(input())
    fibonacci = [0, 1]

    for i in range(2, n + 1):
        fibonacci.append(fibonacci[i - 1] + fibonacci[i - 2])

    print(fibonacci[n])

if __name__ ==  '__main__':
    main()