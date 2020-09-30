from sys import stdin

input = stdin.readline

def main():
    while True:
        name, n = input().split()

        if name == '#' and n == '0':
            break

        count = int(n)

        while True:
            action, amount = input().split()
            amount = int(amount)

            if action == 'X':
                break
            elif action == 'B':
                if count + amount <= 68:
                    count += int(amount)
            elif action == 'C':
                if count - amount >= 0:
                    count -= int(amount)

        print(name, count)

if __name__ == '__main__':
    main()