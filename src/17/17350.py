def main():
    players = [input() for _ in range(int(input()))]

    print('뭐야;' if 'anj' in players else '뭐야?')

if __name__ == '__main__':
    main()
