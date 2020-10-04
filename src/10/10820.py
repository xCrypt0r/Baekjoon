import re

def main():
    rgx = [re.compile(r'[a-z]'), re.compile(r'[A-Z]'), re.compile(r'\d'), re.compile(r' ')]

    while True:
        try:
            s = input()
        except:
            break

        count = [len(re.findall(r, s)) for r in rgx]

        print(*count)

if __name__ ==  '__main__':
    main()