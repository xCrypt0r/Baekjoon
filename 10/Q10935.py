from base64 import b64encode

def main():
    print(b64encode(input().encode('utf-8')).decode('utf-8'))

if __name__ == '__main__':
    main()
