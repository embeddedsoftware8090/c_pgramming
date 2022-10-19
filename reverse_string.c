#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch[8] = "Balkumar";
    char *ptr =ch;
    int i;
    for ( i = 7; i >= 0; i--)
    printf("after reverse string = %c \n",ch[i]);
        
    
}