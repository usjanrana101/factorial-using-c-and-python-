long int factorial(int a)
{
  int i;
  long int fact;
  if(a==0)
   return (1);
  else
  {
   fact=a*factorial(a-1);  // recursion is used
   return (fact);
   }
}
