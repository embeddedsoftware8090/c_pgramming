//write a program to find factorial of a given number using recursion function.
#include<stdio.h>
int fact (int, int);
int main ()
{
  int number, factorial;
  printf ("Enter the n value\n");
  scanf ("%d", &number);

  factorial = fact (number, 1);
  printf ("f = %d\n", factorial);
}

int fact (int number, int factorial)
{
  if (number != 0)            //4!=0,3!=0,2!=0,1!=0,0!=0
    {
      factorial = factorial * number;        //f=1*4,f=4*3,f=12*2,f=24*1  
      number = number - 1;        //n=3,n=2,n=1,n=0 
      return fact (number, factorial);
    }
  else
    return factorial;

}
