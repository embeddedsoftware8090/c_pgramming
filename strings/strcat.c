#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    strcat(str1, str2);// concate the two strings
    printf("String = %s \n", str1);
}