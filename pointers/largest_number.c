#include<stdio.h>
int main()
{
    int a = 10,b = 20,c = 40;
    printf("Enter the number a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
       printf("A is largest number a = %d\n",a);
    }
    if (b>a && b>c)
    {
        printf("B is largest number b = %d\n",b);/* code */
    }
    if (c>a && c>b)
    {
        printf("C is largest number c = %d\n",c);/* code */
    }
    
}


