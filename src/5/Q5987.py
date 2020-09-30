def encode(n, s):
    return s[n:] + s

def main():
    for _ in range(int(input())):
        N, C, S = input().split()

        for _ in range(int(C)):
            S = encode(int(N), S)

        print(S)

if __name__ == '__main__':
    main()
