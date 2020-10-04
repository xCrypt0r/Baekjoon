def main():
    s1, s2 = map(int, input().split())
    correct1, correct2 = True, True

    for _ in range(s1):
        a, b = input().split()

        if a != b:
            correct1 = False

    for _ in range(s2):
        a, b = input().split()

        if a != b:
            correct2 = False

    if not correct1: print('Wrong Answer')
    elif not correct2: print('Why Wrong!!!')
    else: print('Accepted')

if __name__ == '__main__':
    main()
