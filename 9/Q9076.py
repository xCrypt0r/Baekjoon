def main():
    for _ in range(int(input())):
        score = sorted(map(int, input().split()))

        print(sum(score[1:-1]) if score[-2] - score[1] < 4 else 'KIN')

if __name__ == '__main__':
    main()
