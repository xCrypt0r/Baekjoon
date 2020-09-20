def main():
    s = input()
    chunks = [s[i:i+3] for i in range(0, len(s), 3)]
    count = 0

    for chunk in chunks:
        count += sum(chunk[i] != 'PER'[i] for i in range(3))

    print(count)

if __name__ == '__main__':
    main()
