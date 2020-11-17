"""
11367. Report Card Time

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 64 ms
해결 날짜: 2020년 9월 18일
"""

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

