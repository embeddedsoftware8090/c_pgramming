#include<stdio.h>
int main()
{
    int *ptr ,number;
    ptr = &number;
    printf("Enter the number :\n");
    scanf("%d",&number);
            printf("number = %d\n",number);// number 
            printf("ptr    = %p\n",ptr); // address of the variable
            printf("&number= %p\n",&number);//address of the variable
            printf("*ptr   = %d\n",*ptr); // dereferencing 
            printf("*ptr   = %p\n",&(*ptr));
            printf("*ptr   = %d\n",*(&ptr));

}


