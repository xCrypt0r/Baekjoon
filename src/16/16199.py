def main():
    y1, m1, d1 = map(int, input().split())
    y2, m2, d2 = map(int, input().split())
    age = y2 - y1

    print(age - (0 if m1 < m2 or (m1 == m2 and d1 <= d2) else 1), age + 1, age, sep='\n')

if __name__ == '__main__':
    main()
