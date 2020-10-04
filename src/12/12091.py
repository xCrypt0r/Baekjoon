def main():
    print(['Vaporeon', 'Jolteon', 'Flareon'][(int(input()) + 1) % 3])

if __name__ == '__main__':
    main()