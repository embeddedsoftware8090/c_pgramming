#include<stdio.h>
#include<stdlib.h>
int sum(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int mod(int x,int y);

int main()
{
    int x,y,z,operation;
    int (*fp)(int x ,int y);
    printf("Enter the numbers x and y :\n");
    scanf("%d %d",&x,&y);
    
    printf("Enter the option 1)sum 2)sub 3)mul 4)div 5)mod :\n");
    scanf("%d",&operation);

    switch (operation)
    {
    case 1:
        fp =sum;
        break;
    case 2:
        fp =sub;
        break;
    case 3:
        fp =mul;
        break;
    case 4:
        fp =div;
        break;
    case 5:
        fp =mod;
        break;
    
    default:
        printf("Invalid option...\n");
        break;
    }
    z = fp(x,y);
    printf("z = %d\n",z);
}

int sum(int x ,int y )
{
    return x + y;
}
int sub(int x,int y)
{
    return x - y;
}

int mul(int x,int y)
{
    return x * y;
}
int div(int x,int y)
{
    return x / y ;
}
int mod(int x,int y)
{
    return x % y ;

}

