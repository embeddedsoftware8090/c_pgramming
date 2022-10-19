//Addition of two number using function pointer

#include <stdio.h>  
int add(int,int);  
int main()  
{  
   int a,b;  
   int (*ip)(int,int);  // declaration of the function pointer
   int result;  
   printf("Enter the values of a and b : ");  
   scanf("%d %d",&a,&b);  
   ip=add;  // here we can pass address  of the function pointer :: & also can use 
   result=(*ip)(a,b);  // dereferencing the function pointer 
   printf("Value after addition is : %d \n",result);  
    return 0;  
}  
int add(int a,int b)  
{  
    int sum=a+b;  
    return sum;  
} 


// //Swapping two number using function pointer
// #include<stdio.h>
// void swap (int *variable1, int *variable2); // functin declaration 
// int main() 
// {
//   int number1 = 25;
//   int number2 = 100;
//   printf("Beofore swaping...\n");
//   printf("number1 is = %d\nnumber2 is = %d\n", number1, number2);
//   swap(&number1, &number2); // calling function 
//   printf("After swaping...\n");
//   printf("number1 is = %d \nnumber2 is = %d\n", number1,number2);
//   return 0;
// }
// void swap (int *variable1, int *variable2)  // function definition
// {
//   int temp;
//   temp = *variable1;
//   *variable1 = *variable2; // logic for swapping
//   *variable2 = temp;
// }


