#include<stdio.h>
int main ()
{
    int i;
    for(i = 0; i<10; i++)
    {
        printf("%d ",i); //i=5
        if(i == 5)
        break;
    }
printf("came outside of loop i = %d\n",i);

}
