#CP 7 fizz buzz

x = 1

while x <=50:
    if x % 3 == 0 and x % 5 ==0:
        print("fizzbuzz")
    elif x % 5 ==0:
        print (("BUzz!"))
    elif x % 3 == 0:
        print("fizz")
    else:
        print(x)
    x+=1
print("thats all numbers through 50")

