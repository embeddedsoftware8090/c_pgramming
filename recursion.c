
// #include<stdio.h>
// void printHW(int count);
// int main()
// {
// printHW(5);
//  return 0;
// }
// void printHW(int count){
//     if (count == 0)
//     {
//         return;/* code */
//     }
//     printf("Hello univision \n");
//     printHW(count-1); // call the function itself
    
// }


//  //write a program to find the factorial of a given number using a recursion function.
#include<stdio.h>
int find_factorial(int);
int main()
{
   int num, fact;
   //Ask user for the input and store it in num
   printf("\nEnter any integer number:");
   scanf("%d",&num);
 
   //Calling our user defined function
   fact =find_factorial(num);
 
   //Displaying factorial of input number
   printf("\nfactorial of %d is: %d \n",num, fact);
   return 0;
}
int find_factorial(int n)
{
   //Factorial of 0 is 1 
   if(n==0)
      return(1);
 
   //Function calling itself: recursion
   return(n*find_factorial(n-1));
}

