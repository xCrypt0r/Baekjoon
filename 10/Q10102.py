def main():
    input()

    votes = input()
    a, b = votes.count('A'), votes.count('B')

    print('A' if a > b else ('B' if a < b else 'Tie'))

if __name__ == '__main__':
    main()