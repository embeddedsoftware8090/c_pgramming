P1.c

#include<stdio.h>
#include <string.h>
int main(){
  char ch[11]={'u','n','i','v','i','s','i','o','n', '\0'};//initialization
  char ch2[11]="univision";
  printf(" %s\n", ch);
   printf(" %s\n", ch2);
 return 0;
}


P2.c

#include<stdio.h>
void main ()
    {
        char s[20];
        printf("Enter the string:\n");
        scanf("%s",&s);
        printf("You entered: %s\n",s);
    }

//use \0 in an array initializer to construct an array equivalent to a null-terminated string;
