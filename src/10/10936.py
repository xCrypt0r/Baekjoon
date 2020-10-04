from base64 import b64decode

def main():
    print(b64decode(input().encode('utf-8')).decode('utf-8'))

if __name__ == '__main__':
    main()
