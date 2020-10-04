from sys import stdin

input = stdin.readline

def main():
    for i in range(1, int(input()) + 1):
        print(f'Case {i}:')

        for grade in [int(input()) for _ in range(int(input()))]:
            if grade < 6:
                print(grade + 1)

if __name__ == '__main__':
    main()