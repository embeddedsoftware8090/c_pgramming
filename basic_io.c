P1.c

#include<stdio.h>
int main()
{
        int a;
        printf("Enter the number a:");
        scanf("%d",&a);//input
        printf("a = %d\n",a);//output
        return 0;
}


P2.c
#include <stdio.h>
int  main( )
{
    int c;
    printf("Enter a character:\n");
    /*
        Take a character as input and
        store it in variable c
    */
    c = getchar();//input
    /*
        display the character stored
        in variable c
    */
    putchar(c);//output
}

P3.c
#include <stdio.h>

int main()
{
    /* character array of length 100 */
    char str[100];
    printf("Enter a string: ");
    gets(str);
    puts(str);
    return 0;
}
