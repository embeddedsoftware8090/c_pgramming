#include<stdio.h>
int main()
{
    int *ptr ,number;
    ptr = &number;
    int **ptr1;//double pointer 
    ptr1 = &ptr;//it is store address of pointer 1st(ptr)
    printf("Enter the number :\n");
    scanf("%d",&number);
    printf("number = %d\n",number);
    printf("ptr    = %p\n",ptr);
    printf("&number= %p\n",&number);
    printf("*ptr   = %d\n",*ptr);
    printf("**ptr1 = %d\n",**ptr1);
    return 0;
    
}
