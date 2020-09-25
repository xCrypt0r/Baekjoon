N = int(input())

def sing(n):
    if n == 0:
        print('No more bottles of beer on the wall, no more bottles of beer.')
        print(f'Go to the store and buy some more, {N} bottle{"s" if N > 1 else ""} of beer on the wall.')
    elif n == 1:
        print('1 bottle of beer on the wall, 1 bottle of beer.')
        print('Take one down and pass it around, no more bottles of beer on the wall.\n')
    else:
	    print(f'{n} bottles of beer on the wall, {n} bottles of beer.')
	    print(f'Take one down and pass it around, {n - 1} bottle{"s" if n > 2 else ""} of beer on the wall.\n')

def main():
    for i in range(N, -1, -1):
        sing(i)

if __name__ == '__main__':
    main()