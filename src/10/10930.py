from hashlib import sha256

def main():
    print(sha256(input().encode('utf-8')).hexdigest())

if __name__ == '__main__':
    main()
