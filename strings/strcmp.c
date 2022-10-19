#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    int cmp = strcmp(str1, str2); // compare two string whether both are same or differents
    printf("Comparison result = %d\n", cmp);
}