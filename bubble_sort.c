#include<stdio.h>
int main()
{
   int apple[] = {5, 6, 2 ,6, 9, 0, -1};
   int number  = 7, i, j;
   
   for(i = 0; i < number - 1; ++i)
   { 
      int swapped = 0;

      for(j = 0; j < (number - i - 1); ++j)
         if(apple[j] > apple[j+1])
         {
            int temp = apple[j];
            apple[j] = apple[j+1];
            apple[j+1] = temp;

            swapped = 1;
         }
      if(!swapped)
         break;
   }
         
   printf("\nApple after sorting : ");
   for(i = 0; i <number; ++i)
   printf("%d ", apple[i]);
   printf("\n");
   return 0;
}
