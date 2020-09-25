from itertools import combinations

def find_dwarf(case):
    if sum(case) == 100:
        print(*sorted(case), sep='\n')

        return True

    return False

def main():
    heights = [int(input()) for _ in range(9)]

    for case in combinations(heights, 7):
        if find_dwarf(case):
            break

if __name__ == '__main__':
    main()