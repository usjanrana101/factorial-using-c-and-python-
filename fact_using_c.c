#include<stdio.h>
#include<time.h>
#include<math.h>
double factorial(int); // here the factorial is calculated as double data type to get the large range of machine number 
void main()
{
  int n;
  double  fact;
  printf("Give the value of n to get n! \n");
  scanf("%d",&n);
  // Calculate the time taken by factorial() 
  clock_t t; 
  t=clock(); //starting of counting time
  fact=factorial(n);
  t=clock()-t; // end
  double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  printf("factorial() took %10e seconds to execute \n", time_taken); 
  printf("Factorial of %d is %10e \n",n,fact);
}
// funtion definition of factorial()
double factorial(int a)
{
  int i;
  double fact;
  if(a==0)
   return (1);
  else
  {
   fact=a*factorial(a-1);  // recursion is used
   return (fact);
   }
}
