import sys

def main():
    for _ in range(int(input())):
        n = int(input())
        numbers = sorted(sys.stdin.readline().strip() for _ in range(n))

        for i in range(n - 1):
            if numbers[i + 1].startswith(numbers[i]):
                print('NO')

                break
        else:
            print('YES')

if __name__ == '__main__':
    main()