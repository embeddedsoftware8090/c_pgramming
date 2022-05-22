//1.function without arguments and without return value

#include<stdio.h>
void sum();
int  main()
    {
        sum();
    }
    void sum()
    {
        int a,b;
        printf("Enter two numbers:\n");
        scanf("%d %d",&a,&b);
printf("The sum is %d\n",a+b);
    }

