import sys

def main():
    input()

    score = [int(x) for x in sys.stdin.readline().split()]

    print(max(score) - min(score))

if __name__ == '__main__':
    main()