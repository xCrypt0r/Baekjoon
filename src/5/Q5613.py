def main():
    res = int(input())

    while True:
        oper = input()

        if oper == '=': break
        
        temp = input()

        if oper == '/': oper = '//'

        res = eval(str(res) + oper + temp)

    print(res)

if __name__ == '__main__':
    main()
