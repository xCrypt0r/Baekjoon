def main():
    pos = list(map(int, input().split()))
    x, y, r = map(int, input().split())

    try:
        print(pos.index(x) + 1)
    except:
        print(0)

if __name__ == '__main__':
    main()