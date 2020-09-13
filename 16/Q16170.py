from datetime import datetime, timedelta

time = datetime.now() + timedelta(hours=9)

print(time.year, time.month, time.day, sep='\n')
