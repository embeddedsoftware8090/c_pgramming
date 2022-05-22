#include<stdio.h>
int main( )
{
    int a;
    printf(" Enter a number:");
    scanf("%d", &a);
    if(a>0)
     {
      printf( "n The number %d is positive.",a);
     }
    else
     {
      printf("n The number %d is negative.",a);
     }
return 0;
 }
Nested if and if-else Statements
##############################################################################
#include<stdio.h>

int main( )
   {
       int a, b,c;
       a=6,b= 5, c=10;
       if(a>b)
          {
             if(b>c)
               {
                 printf("\ n Greatest is: " , a);
                }
              else if(c>a)
                     {
                      printf("\n Greatest is: ", c);
                     }
            }
         else if(b>c)     //outermost if-else block
                {
                 printf("\n Greatest is: " , b);
                }
               else
                {
                 printf( "\n Greatest is: " , c);
                }
      return 0;
    }

