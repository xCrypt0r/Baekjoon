def main():
    print(sum(sorted(map(int, input().split()), reverse=True)[0:2]))

if __name__ == '__main__':
    main()
