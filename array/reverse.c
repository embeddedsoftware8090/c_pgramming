#include<stdio.h>
int main()
{
    int array[6] = {10,20,30,40,50,60};
    int i;
    for ( i = 0; i < 6; i++)
    {
        printf("%d \n",array[i]);
    }
    printf("After reverse the array:\n");
    for ( i = 5; i >=0; i--)
    {
        // if (i% 2 == 0)
        // {
        // printf("%d\n",array[i]);
        // }
        printf("%d\n",array[i]);
    }
    
}
