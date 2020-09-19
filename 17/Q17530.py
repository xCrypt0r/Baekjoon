def main():
    gain = []

    for _ in range(int(input())):
        gain.append(int(input()))

    print('S' if max(gain) == gain[0] else 'N')

if __name__ == '__main__':
    main()
