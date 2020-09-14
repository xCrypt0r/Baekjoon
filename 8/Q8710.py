from math import ceil

def main():
    k, w, m = map(int, input().split())

    print(0 if k >= w else ceil((w - k) / m))

if __name__ == '__main__':
    main()
