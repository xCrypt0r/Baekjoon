from sys import stdin

input = stdin.readline

def main():
    for _ in range(int(input())):
        c1, c2 = map(sorted, input().split())

        for i in range(len(c1)):
            if c1[i] != c2[i]:
                print('Impossible')

                break
        else:
            print('Possible')

if __name__ == '__main__':
    main()