from hashlib import sha512

def main():
    print(sha512(input().encode('utf-8')).hexdigest())

if __name__ == '__main__':
    main()
