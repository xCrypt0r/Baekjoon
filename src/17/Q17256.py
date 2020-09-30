def main():
    a = [int(x) for x in input().split()]
    c = [int(x) for x in input().split()]
    
    print(abs(c[0] - a[2]), c[1] // a[1], abs(c[2] - a[0]))

if __name__ == '__main__':
    main()
