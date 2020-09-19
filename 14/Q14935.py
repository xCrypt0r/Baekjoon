def main():
    x = input()

    for _ in range(len(x)):
        x = str(int(x[0]) * len(x))
        
        if len(x) == 1:
            break

    print('FA' if len(x) == 1 else 'NFA')

if __name__ == '__main__':
    main()
