from base64 import b16decode

def main():
    print(b16decode(input().encode('utf-8')).decode('utf-8'))

if __name__ == '__main__':
    main()
