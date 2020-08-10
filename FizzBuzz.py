import os

def FizzBuzz(i):
    if(i==0):
        return
    else:
        FizzBuzz(i-1)
        if(i%3==0 and i%5==0):
            print("FizzBuzz")
        elif(i%3==0):
            print("Fizz")
        elif(i%5==0):
            print("Buzz")
        else:
            print(i)
 
FizzBuzz(100) 
    
os.system("pause")
