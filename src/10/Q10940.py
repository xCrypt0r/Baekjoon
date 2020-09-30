from base64 import b16encode

def main():
    print(b16encode(input().encode('utf-8')).decode('utf-8'))

if __name__ == '__main__':
    main()
