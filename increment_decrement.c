#include<stdio.h>

int main()
{
    int x = 12, y = 1;
    printf("Initial value of x = %d\n", x); // print the initial value of x
    printf("Initial value of y = %d\n\n", y); // print the initial value of y

    y = ++x; // increment the value of x by 1 then assign this new value to y

    printf("After incrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);

    y = --x; // decrement the value of x by 1 then assign this new value to y

    printf("After decrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);
     return 0;
}
