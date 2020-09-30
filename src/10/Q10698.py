from sys import stdin

input = stdin.readline

def main():
    for i in range(1, int(input()) + 1):
        question, answer = input().split(' = ')

        if eval(question) == int(answer):
            print(f'Case {i}: YES')
        else:
            print(f'Case {i}: NO')

if __name__ == '__main__':
    main()