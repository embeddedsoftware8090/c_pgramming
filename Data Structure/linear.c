Example 1##########################################################################################

#include<stdio.h>   
void main ()  
{  
    int a[10] = {10, 23, 40, 1, 2, 0, 14, 13, 50, 9};  
    int number, i,location;  
    printf("Enter item which is to be searched:\n");  
    scanf("%d",&number);  
    for (i = 0; i< 10; i++)  
    {  
        if(a[i] == number)   
        {  
           location = i+1;  
            break;  
        }   
        else   
       location = 0;  
    }   
    if(location != 0)  
    {  
        printf("Item found at location: %d\n",location);  
    }  
    else  
    {  
        printf("Item not found\n");   
    }  
}   

Example 2#########################################################################################
#include <stdio.h>
int main ()
{
  int array[100], search, c, n;
  printf ("Enter number of elements in array\n");
  scanf ("%d", &n);
  printf ("Enter %d integer(s)\n", n);
  for (c = 0; c < n; c++)
   scanf ("%d", &array[c]);

  printf ("Enter a number to search\n");
  scanf ("%d", &search);

  for (c = 0; c < n; c++)
    {
      if (array[c] == search)    /* If required element is found */
          {
         printf ("%d is present at location %d.\n", search, c + 1);
         break;
      }
    }
  if (c == n)
  printf ("%d isn't present in the array.\n", search);
  return 0;
}
