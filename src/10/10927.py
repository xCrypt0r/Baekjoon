from hashlib import md5

def main():
    print(md5(input().encode('utf-8')).hexdigest())

if __name__ == '__main__':
    main()
