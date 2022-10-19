#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Balkumar Vishwakarma";
    char str2[50]; // empty string for copy there elements
    strcpy(str2, str1); // copying string source to destination  (destination ,source)
    printf("Source string = %s\n", str1);
    printf("Destination string = %s\n", str2);

}