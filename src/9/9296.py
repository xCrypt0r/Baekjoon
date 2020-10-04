def main():
    for i in range(1, int(input()) + 1):
        L = int(input())
        answer, guess = input(), input()

        print(f'Case {i}: {sum(answer[i] != guess[i] for i in range(L))}')

if __name__ == '__main__':
    main()