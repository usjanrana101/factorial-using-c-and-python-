#This is the code to calculate factorial using funtion
import timeit 
def factorial(n):  
   if n == 1:  
       return n  
   else:  
       return n*factorial(n-1)
# take input from the user  
num = int(input("Enter a number n to get n! :  "))
# check whether the number is negative  
if num < 0:
   print("Sorry, factorial does not exist for negative numbers")  
elif num == 0:
   print("The factorial of 0 is 1")
else:
   print("The factorial of",num,"is",factorial(num))  
   print("Time taken to execute the code :> ",timeit.timeit(),"sec")
