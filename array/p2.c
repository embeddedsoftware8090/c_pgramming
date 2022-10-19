/*Write a program in C to read n number of values in an array and display it in reverse order. Go to the editor
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{ 
int num;
printf( "Enter the  n number of value:\n"); 
scanf("%d",&num); 
int list[num];

printf("Input 3 number of elements in the array :\n");
for (int i = 0; i < num; i++)
{
   scanf("%d",&list[i]); /* code */
}printf("Expected Output :");
for (int i = num -1; i >=0; i--)
{
    printf("%d ",list[i]);/* code */
}
printf("\n"); 

 return 0;
}