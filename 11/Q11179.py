def main():
    print(int(''.join(reversed(bin(int(input()))[2:])), 2))

if __name__ == '__main__':
    main()
