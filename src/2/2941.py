def main():
    croatian = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
    s = input()

    for c in croatian:
        s = s.replace(c, '.')

    print(len(s))

if __name__ == '__main__':
    main()