def main():
    start = list(map(int, input().split(' : ')))
    end = list(map(int, input().split(' : ')))
    coef = [3600, 60, 1]
    elapsed = sum([(end[i] - start[i]) * coef[i] for i in range(3)])

    if elapsed < 0: elapsed += 24 * 3600

    print(elapsed)

if __name__ == '__main__':
    main()
