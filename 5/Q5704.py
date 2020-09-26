from sys import stdin
from string import ascii_lowercase as alphabet

input = stdin.readline

def main():
    while True:
        s = input().strip()

        if s == '*':
            break

        for c in alphabet:
            if not c in s:
                print('N')

                break
        else:
            print('Y')

if __name__ == '__main__':
    main()