//4.function with arguments and with return value

#include<stdio.h>
int sum(int, int);
int main()
{
        int a,b,result;

        printf("Enter two numbers:\n");
        scanf("%d %d",&a,&b);
        result = sum(a,b);
        printf("The sum is : %d\n",result);
}
int sum(int a, int b)
{
        return a+b;
}
