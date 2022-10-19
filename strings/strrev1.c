// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[] = "Hello";
//     printf("Reversed string = %s", strrev(s));
// }

#include<stdio.h>
#include<string.h>
void main(){
   char string[25];
   printf("Enter String to be reversed : ");
   gets(string);
   printf("String before strrev(): %s\n",string);
   strrev(string);
   printf("The string after strrev(): ");
   puts(string);
}

