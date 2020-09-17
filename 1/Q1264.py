import re

def main():
    r = re.compile('[aeiou]', re.I)

    while True:
        s = input()

        if s == '#':
            break

        print(len(r.findall(s)))

if __name__ == '__main__':
    main()

