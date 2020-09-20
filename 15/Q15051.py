def check_time(floor, people):
    time = 0

    for i in range(3):
        time += abs(floor - i) * people[i] * 2

    return time

def main():
    A = [int(input()) for _ in range(3)]
    time = [check_time(i, A) for i in range(3)]

    print(min(time))

if __name__ == '__main__':
    main()
