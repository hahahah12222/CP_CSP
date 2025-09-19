#Cp 7th notes about getting the time

import time
import datetime

epoch=time.time()
readable_time=time.ctime(epoch)
print(f"the time in second since jan 1, 1970: {epoch}")
print(f"the time is : {readable_time}")

now=datetime.datetime.now()
hour=now.hour
print(f"the time is:{now}")
print(f"the hour is:{hour}")
