def main():
    while True:
        try:
            H, P = map(int, input().split())

            print(f'{(H / P):.2f}')
        except:
            break

if __name__ == '__main__':
    main()