from hashlib import sha384

def main():
    print(sha384(input().encode('utf-8')).hexdigest())

if __name__ == '__main__':
    main()
