def main():
    num = sorted(map(int, input().split()))
    d1 = num[1] - num[0]
    d2 = num[2] - num[1]

    if d1 == d2: res = num[2] + d1
    elif d1 > d2: res = num[0] + d2
    else: res = num[1] + d1

    print(res)

if __name__ == '__main__':
    main()