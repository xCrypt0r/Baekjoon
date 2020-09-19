def main():
    prev = ''
    task = 1

    for _ in range(int(input())):
        color = input()

        if color != prev:
            task += 1

        prev = color

    print(task)

if __name__ == '__main__':
    main()
