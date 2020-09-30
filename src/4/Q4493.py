import sys

def main():
    for _ in range(int(input())):
        count = 0

        for _ in range(int(input())):
            a, b = sys.stdin.readline().split()

            if a == b: pass
            elif (a == 'P' and b == 'R') or (a == 'S' and b == 'P') or (a == 'R' and b == 'S'): count += 1
            else: count -= 1

        print('Player 1' if count > 0 else ('Player 2' if count < 0 else 'TIE'))

if __name__ == '__main__':
    main()