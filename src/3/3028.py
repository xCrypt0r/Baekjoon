def main():
    cups = [1, 0, 0]

    for action in input():
        if action == 'A': cups[0], cups[1] = cups[1], cups[0]
        elif action == 'B': cups[1], cups[2] = cups[2], cups[1]
        elif action == 'C': cups[0], cups[2] = cups[2], cups[0]

    print(cups.index(1) + 1)

if __name__ == '__main__':
    main()
