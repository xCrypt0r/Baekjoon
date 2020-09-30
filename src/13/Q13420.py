def main():
    for _ in range(int(input())):
        question, answer = input().split('=')

        print('correct' if eval(question) == int(answer) else 'wrong answer')

if __name__ == '__main__':
    main()
