def main():
    color = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white']
    r = [input() for _ in range(3)]

    print(int(str(color.index(r[0])) + str(color.index(r[1]))) * (10 ** color.index(r[2])))

if __name__ == '__main__':
    main()