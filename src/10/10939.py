from base64 import b32decode

def main():
    print(b32decode(input().encode('utf-8')).decode('utf-8'))

if __name__ == '__main__':
    main()
