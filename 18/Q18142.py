def main():
    arr = list(input().split())
    needle = ['bubble', 'tapioka']
    res = [x for x in arr if not x in needle]

    print('nothing' if not res else ' '.join(res))

if __name__ == '__main__':
    main()
