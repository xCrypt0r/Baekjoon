def main():
    cx = -1000001

    for x in map(int, input().split()):
        if x < cx:
            print('Bad')

            break

        cx = x
    else:
        print('Good')

if __name__ == '__main__':
    main()