#include<stdio.h>
int even(int num);
int odd(int num1); // function declaration 

int main()
{
    int number;
    printf("Enter the number :\n");
    scanf("%d",&number);
    even(number); //calling the functon 
    odd(number); // calling function 
}
int even(int num) // function definition 
{
    printf("Even number are:\n");
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {   
           
            printf("%d\n",i);
         
        }
        
    }
    
}
int odd(int num1) // function definiton
{
    printf("Odd number are:\n");
    for (int i = 0; i <=num1; i++)
    {
        if (i % 2 == 1)
        {   
           
            printf("%d\n",i);
           
        }
        
    }
    
}

// #include<stdio.h>
// int main()
// {
//     int number;
//     int i;

//     printf("Enter the number :\n");
//     //for (int i = 0; i <= number; i++)
//     scanf("%d",&number);
//     for (int i = 0; i <= number; i++)
//         if (i % 2 == 0)
//         {
//             printf("Even numers are : %d \n",i);
//         }

//      for (int i = 0; i <= number; i++)
//        if (i % 2 == 1)
       
//         {
//             printf("Odd  numers are : %d \n",i);
//         }
//     //printf("Entered number are:%d\n",i);
//     return 0;
    
    
// }