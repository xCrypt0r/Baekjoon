def main():
    input()

    s = input()
    count1 = s.count('2')
    count2 = s.count('e')

    print(2 if count1 > count2 else ('e' if count1 < count2 else 'yee'))

if __name__ == '__main__':
    main()
