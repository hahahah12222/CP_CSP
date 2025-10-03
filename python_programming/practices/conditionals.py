#Cp 7 conditionals notes

#homework_done=input("is your homework done:")

#if homework_done=="no":
    #print("then go do your homework!")

#else:
   # print("yes you can go!")

#insie an if statement you ut a condition
#if statement checks wheather a condition is ture if its fure it runs the lock o code underneath
#boolean statements are expressions tha result in rue or false
#statements run when the if condition is not true
#you use an if elif else statement

#5 < 10	
#>8 > 3	
#>=10 >= 6	True, 
#==9 != 5to	4 == 4	True
#!=	Not equal to

grade = 100

if grade > 89:
    print(f"you have {grade}% that is an A!")
    if grade>79:
        print(f"you have {grade}% that is a B!")
    else:
        print(f"you have a {grade}% that is a F!")

        #logical operators and, or not
        
        name= input("what is your name:")

        if name=="ms laRose":
            print("you are the teacher")
        elif name=="tia" or name == "ashley":
         print("you are the TA")
        else:
            print(f"hello {name},you are a student!")