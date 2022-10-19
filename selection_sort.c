#include <stdio.h>
int main()
{
   int height[20], i, j, temp;
   printf("Enter then list : \n");
   for (i = 0; i <= 5; i++)
      scanf("%d", &height[i]); // scaning the elemet for list

   printf("Before bubble sorting the height are:\n");
   for (i = 0; i < 6; i++)
      printf("%d ", height[i]);
   for (i = 0; i < 5; i++)
   {
      for (j = i + 1; j < 6; j++) // nested loop
      {
         if (height[i] > height[j]) // checking height one by one if true swap else unchanged
         {
            temp = height[i];      // one more variable for swapping
            height[i] = height[j]; // swapping two numbers
            height[j] = temp;
         }
      }
   }
   printf("\nAfter bubble sorting the height are:\n");
   for (i = 0; i < 6; i++)
      printf("%d ", height[i]);
   printf(" \n");
   return 0;
}
