from hashlib import sha224

def main():
    print(sha224(input().encode('utf-8')).hexdigest())

if __name__ == '__main__':
    main()
