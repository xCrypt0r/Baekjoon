from itertools import combinations

def main():
    L, C = map(int, input().split())
    used = sorted(list(map(str, input().split())))
    passwords = combinations(used, L)

    for password in passwords:
        count = 0

        for letter in password:
            if letter in 'aeiou':
                count += 1

        if (count >= 1 and count <= L - 2):
            print(''.join(password))

if __name__ == '__main__':
    main()
