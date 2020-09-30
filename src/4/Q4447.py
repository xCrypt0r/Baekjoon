def main():
    n = int(input())
    lines = [input() for _ in range(n)]

    for i in range(n):
        line = lines[i].lower()
        gc = line.count('g')
        bc = line.count('b')

        print(f'{lines[i]} is {"GOOD" if gc > bc else "A BADDY" if gc < bc else "NEUTRAL"}')

if __name__ == '__main__':
    main()