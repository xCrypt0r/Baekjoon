def main():
    cups = [1, 0, 0, 2]

    for action in input():
        if action == 'A': cups[0], cups[1] = cups[1], cups[0]
        elif action == 'B': cups[0], cups[2] = cups[2], cups[0]
        elif action == 'C': cups[0], cups[3] = cups[3], cups[0]
        elif action == 'D': cups[1], cups[2] = cups[2], cups[1]
        elif action == 'E': cups[1], cups[3] = cups[3], cups[1]
        elif action == 'F': cups[2], cups[3] = cups[3], cups[2]

    print(cups.index(1) + 1, cups.index(2) + 1, sep='\n')

if __name__ == '__main__':
    main()
