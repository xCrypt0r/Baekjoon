def main():
    n = int(input())
    s1, s2 = input(), input()

    print(sum(s1[i] == s2[i] for i in range(n)))

if __name__ == '__main__':
    main()