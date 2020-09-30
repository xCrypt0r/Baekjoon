def main():
    cache = [0] * 1000001

    for _ in range(int(input())):
        l = int(input())

        for i in range(1, l + 1):
            if not cache[i]:
                cache[i] = cache[i - 1] + i ** 2

        print(cache[l])
                
if __name__ == '__main__':
    main()
