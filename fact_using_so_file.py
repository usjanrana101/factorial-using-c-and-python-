from ctypes import *
import timeit
so_file ='./fact_for_python.so' # loading the .so file
cfactorial = CDLL(so_file)
n=input('give a number n to get n! \n')
print('factorial of ',n,'is',cfactorial.factorial(n))
print('time taken',timeit.timeit(),'sec')
