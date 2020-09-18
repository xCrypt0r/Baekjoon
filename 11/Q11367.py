def main():
    for _ in range(int(input())):
        name, score = input().split()
        score = int(score)

        if score < 60: grade = 'F'
        elif score < 67: grade = 'D'
        elif score < 70: grade = 'D+'
        elif score < 77: grade = 'C'
        elif score < 80: grade = 'C+'
        elif score < 87: grade = 'B'
        elif score < 90: grade = 'B+'
        elif score < 97: grade = 'A'
        else: grade = 'A+'

        print(name + ' ' + grade)

if __name__ == '__main__':
    main()

