from base64 import b32encode

def main():
    print(b32encode(input().encode('utf-8')).decode('utf-8'))

if __name__ == '__main__':
    main()
