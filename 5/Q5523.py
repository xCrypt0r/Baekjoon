import sys

def main():
    a, b = 0, 0

    for _ in range(int(input())):
        A, B = map(int, sys.stdin.readline().split())

        if A > B: a += 1
        elif A < B: b += 1

    print(a, b)

if __name__ == '__main__':
    main()
