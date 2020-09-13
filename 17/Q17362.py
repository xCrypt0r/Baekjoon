def main():
    x = int(input()) % 8

    if x == 1: answer = 1
    elif x in [2, 0]: answer = 2
    elif x in [3, 7]: answer = 3
    elif x in [4, 6]: answer = 4
    elif x == 5: answer = 5

    print(answer)

if __name__ == '__main__':
    main()
