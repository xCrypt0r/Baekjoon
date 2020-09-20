def main():
    N = int(input())
    morse = { '.': 1, '-': 5, ':': 2, '=': 10 }
    expression = [morse.get(x, x) for x in list(input())]
    formula = ''
    temp = 0

    for x in expression:
        if isinstance(x, int):
            temp += x
        else:
            if temp:
                formula += str(temp)
                temp = 0

            formula += x

    formula += str(temp)

    print(eval(formula))

if __name__ == '__main__':
    main()
