def main():
    for _ in range(int(input())):
        input()
        
        res = sum(map(int, input().split()))

        print('Right' if res > 0 else ('Left' if res < 0 else 'Equilibrium'))

if __name__ == '__main__':
    main()
