def main():
    score1 = sum(map(lambda i: int(input()) * i, range(3, 0, -1)))
    score2 = sum(map(lambda i: int(input()) * i, range(3, 0, -1)))

    print('A' if score1 > score2 else ('B' if score1 < score2 else 'T'))

if __name__ == '__main__':
    main()
