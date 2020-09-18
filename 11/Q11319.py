def main():
    for _ in range(int(input())):
        s = input().lower()
        consonants, vowels = 0, 0

        for c in s:
            if c in 'aeiou':
                vowels += 1
            elif not c == ' ':
                consonants += 1

        print('{} {}'.format(consonants, vowels))

if __name__ == '__main__':
    main()
