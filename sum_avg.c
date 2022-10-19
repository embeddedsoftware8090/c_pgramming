#include<stdio.h>
float sum(float a, float b);
float average(float x,float y);
int main()
{
    printf("sum of two number = %f  \n",sum(10,5));
    printf("average of two numbers = %f\n",average(10,5));
}
float sum(float a, float b)
{
    float num = a + b;
    return num;
}
float average(float x,float y)
{
    float num1 = (x + y) / 2;
    return num1;
}

/*  C program to find Sum and Average of two numbers  */

// #include <stdio.h>

// int main()
// {
//     int a,b,sum;
//     float avg;

//     printf("Enter first number :");
//     scanf("%d",&a);
//     printf("\nEnter second number :");
//     scanf("%d",&b);

//     sum=a+b;
//     avg= (float)(a+b)/2;

//     printf("\nSum of %d and %d is = %d\n",a,b,sum);
//     printf("\nAverage of %d and %d is = %f\n",a,b,avg);

//     return 0;
// }