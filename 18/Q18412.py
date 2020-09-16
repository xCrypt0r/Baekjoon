def main():
    N, A, B = map(int, input().split())
    S = input()

    print(S[0:A-1] + S[A-1:B][::-1] + S[B:])

if __name__ == '__main__':
    main()