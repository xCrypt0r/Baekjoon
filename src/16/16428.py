def main():
    A, B = map(int, input().split())
    q, r = divmod(A, B)

    if B < 0 and A != 0:
        q += 1
        r -= B

    print(q, r, sep='\n')

if __name__ == '__main__':
    main()
