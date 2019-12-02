import math
import scipy.misc as sp
import timeit
n=int(input('Enter a number n to get n!'))
print('The factorialof',n,'is = ',sp.factorial(n))
print("Time taken to execute the code :> ",timeit.timeit(),"sec")
