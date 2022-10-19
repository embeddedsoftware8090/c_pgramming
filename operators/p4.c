#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
int a =15;
printf("%d\n",a++);
printf("%d\n",--a);
printf("%d\n",a--);
 return 0;
}

/*
If a is 15, then what would be the value of:
printf("%d",++a);

printf("%d",a++); //15  --15

printf("%d",--a); //14 ---15

printf("%d",a--); //15 if one by one execute  --15
*/