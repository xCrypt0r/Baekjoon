from collections import Counter

def main():
    players = [input() for _ in range(int(input()))]
    frequency = Counter(p[0] for p in players)
    res = sorted([k for k, v in frequency.items() if v >= 5])

    print('PREDAJA' if not res else ''.join(res))

if __name__ == '__main__':
    main()
