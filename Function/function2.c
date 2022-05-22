//2.function without arguments and with return value
#include<stdio.h>
int sum();
void main()
    {
        int result;
        result = sum();
        printf("%d\n",result);
    }
    int sum()
    {
        int a,b;
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        return a+b;//return
    }
