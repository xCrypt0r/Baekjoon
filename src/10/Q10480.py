def main():
    for _ in range(int(input())):
        x = int(input())

        print(f'{x} is {"odd" if x & 1 else "even"}')

if __name__ == '__main__':
    main() 
