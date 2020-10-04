def main():
    X = int(input())
    res = X
    
    for _ in range(int(input())):
        res += (X - int(input()))

    print(res)

if __name__ == '__main__':
    main()
