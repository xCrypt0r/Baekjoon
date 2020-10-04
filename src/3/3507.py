from itertools import permutations

def main():
    n = int(input())

    if n > 198:
        print(0)

        return

    ate = range(100)
    pairs = [x for x in permutations(ate, 2) if sum(x) == n]

    print(len(pairs) + (0 if n & 1 else 1))

if __name__ == '__main__':
    main()
