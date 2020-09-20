import re

def main():
    print(re.sub(r'(e+)', r'\1' * 2, input()))

if __name__ == '__main__':
    main()
