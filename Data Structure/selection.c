Example 1

#include<stdio.h>
int main() 
{
   int height[6] = {10,90,50,60,30,20}, i,j,n,temp;
printf("Before bubble sorting the height are:\n");
   for(i=0; i<6; i++)
   printf("%d ", height[i]);
   for (i=0; i<5; i++)
   {
      for (j=i+1; j<6; j++)
      {
         if (height[i] > height[j])//checking height one by one if true swap else unchanged
         {
            temp = height[i];
            height[i] = height[j];
            height[j] = temp;
         }
      }
   }
    printf ("\nAfter bubble sorting the height are:\n");
    for (i=0; i<6; i++)
    printf("%d ", height[i]);
   return 0;
}
