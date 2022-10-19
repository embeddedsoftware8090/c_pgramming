#include<stdio.h>
int even(int num);
int odd(int num1); // function declaration 
static int sum = 0;
static int sum1 = 0;
int main()
{
    int number;
    printf("Enter the number :\n");
    scanf("%d",&number);
    even(number); //calling the functon 
    odd(number); // calling function 
}
int even(int num) // function definition 
{
    printf("Even number are:\n");
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {   
            sum1 = sum1 +i;
            printf("sum of even number :%d\n",sum1);
        }
    }
}
int odd(int num1) // function definiton
{
    printf("Odd number are:\n");
    for (int i = 0; i <=num1; i++)
    {
        if (i % 2 == 1)
        {   
            sum = sum + i;
            printf("sum of odd number : %d\n",sum);
        }
    }
}