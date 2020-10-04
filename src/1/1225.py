def main():
    A, B = map(str, input().split(' '))

    print(sum(int(a) for a in A) * sum(int(b) for b in B))

if __name__ == '__main__':
    main()