def main():
    S = int(input())
    M = int(input())
    L = int(input())
    score = S + M * 2 + L * 3

    print('sad' if score < 10 else 'happy')

if __name__ == '__main__':
    main()
