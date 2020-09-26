def main():
    seq = [int(input()) for _ in range(int(input()))]

    if seq[1] * 2 == seq[0] + seq[2]:
        print(seq[-1] + (seq[1] - seq[0]))
    else:
        print(seq[-1] * (seq[1] // seq[0]))

if __name__ == '__main__':
    main()