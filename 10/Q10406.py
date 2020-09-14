def main():
    W, N, P = map(int, input().split())
    H = [h for h in map(int, input().split()) if W <= h <= N]

    print(len(H))

if __name__ == '__main__':
    main()
