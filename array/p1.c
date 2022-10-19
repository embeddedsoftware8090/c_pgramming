#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int list[10];
int i;
printf( "Enter the array elements:\n"); 
for (int i = 0; i < 10; i++)
{
printf("Elements-%d : ",i);
scanf("%d",&list[i]); /* code */
}
printf("Expected elemets are:");
for (int i = 0; i < 10; i++)
{
printf("%d ",list[i]);
}
printf("\n");
 return 0;
}