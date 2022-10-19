#include<stdio.h>
int main()
{
    int array[10] = {10,80,40,30,10,20,70,50,10,60};
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("%d \n",array[i]);
    }
    printf("After reverse the array:\n");
    for ( i = 9; i >=0; i--)
    {
        if (i% 2 == 0)
        {
        printf("%d\n",array[i]);
        }
    //printf("%d\n",array[i]);
    }
    

}
