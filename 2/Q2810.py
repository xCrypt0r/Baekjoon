def main():
    N = int(input())
    seats = input()

    print(len(seats.replace('LL', 'S')) + 1 if seats.count('LL') else N)

if __name__ == '__main__':
    main()