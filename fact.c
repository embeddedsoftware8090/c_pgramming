#include<stdio.h>
int function(int *num);
int main()
{
int num,s;
printf("Enter the number :\n");
scanf("%d",&num);
//s = function(&num); // address passing 
printf("factorial number is %d \n",function(&num));
}
int function(int *num)
{
int fact = 1;
    while (*num)
    {
        fact = fact * (*num) ;
        (*num)--;
    }
 return fact;
}



