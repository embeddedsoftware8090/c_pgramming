// #include<stdio.h>   
// void main ()  
// {  
//     int a[10] = {10, 23, 40, 1, 2, 0, 14, 13, 50, 9};  
//     int number, i,location;  
//     printf("Enter item which is to be searched:\n");  
//     scanf("%d",&number);  
//     for (i = 0; i< 10; i++)  
//     {  
//         if(a[i] == number)   
//         {  
//            location = i+1;  
//             break;  
//         }   
//         else   
//        location = 0;  
//     }   
//     if(location != 0)  
//     {  
//         printf("Item found at location: %d\n",location);  
//     }  
//     else  
//     {  
//         printf("Item not found\n");   
//     }  
// }   



#include <stdio.h>
int main ()
{
  int array[100], search, start_element, number;
  printf ("Enter number of elements in array\n");
  scanf ("%d", &number);
  printf ("Enter %d integer(s)\n", number);
  for (start_element = 0; start_element < number; start_element++) 
   scanf ("%d", &array[start_element]);// for taking numbers from users

  printf ("Enter a number to search\n");
  scanf ("%d", &search); // which number want to search

  for (start_element = 0; start_element < number; start_element++) //  checking number one by for search
    {
      if (array[start_element] == search)	/* If required element is found */
    	  {
	     printf ("%d is present at location %d.\n", search, start_element + 1);
	     break;
	  }
    } 
  if (start_element == number)
  printf ("%d isn't present in the array.\n", search);
  return 0;
}

