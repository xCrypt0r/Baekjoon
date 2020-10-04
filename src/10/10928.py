from hashlib import sha1

def main():
    print(sha1(input().encode('utf-8')).hexdigest())

if __name__ == '__main__':
    main()
