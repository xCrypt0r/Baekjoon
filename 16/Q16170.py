from datetime import datetime, timedelta

def main();
    time = datetime.now() + timedelta(hours=9)

    print(time.year, time.month, time.day, sep='\n')

if __name__ == '__main__':
    main()
