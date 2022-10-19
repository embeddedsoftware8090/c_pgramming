#include<stdio.h>
int main()
{
    int array[10]; 
    int i,j;
    printf("Enter the array:\n");
    for ( i = 0; i <10; i++)
    {
    scanf("%d",&array[i]);
    }
    printf("Element are:\n");
    for ( i = 0; i <10; i++)
    {
    
    printf("%d \n",array[i]);
    }
    printf("\n");
}