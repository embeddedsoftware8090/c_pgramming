/*  Write a program in C to find the sum of all elements of the array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15  */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
int num ,sum;
printf("Input the number of elements to be stored in the array :\n"); 
scanf("%d",&num); 
int list[num];
printf("Input 3 elements in the array :\n");
for (int i = 0; i < num; i++)
{
  printf("elements -%d :",i);
  scanf("%d",&list[i]);
  sum += list[i] ;
}
printf("Expected Output :\n");
printf("%d",sum);
printf("\n");
return 0;
} 