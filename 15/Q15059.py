def main():
    a = list(map(int, input().split()))
    r = list(map(int, input().split()))
    need = sum([r[i] - a[i] if r[i] > a[i] else 0 for i in range(3)])

    print(need)

if __name__ == '__main__':
    main()
