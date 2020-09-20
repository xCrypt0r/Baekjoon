def main():
    for _ in range(int(input())):
        s = input().lower()

        for i in range(len(s) // 2):
            if s[i] != s[len(s) - i - 1]:
                print('No')

                break
        else:
            print('Yes')

if __name__ == '__main__':
    main()