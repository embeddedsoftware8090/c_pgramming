#include <stdio.h>
int main()
{
   int number; // 4 byte
   char name ;// 1 byte
   float percentage;// 4 byte
   double d;
   printf("int size     = %d \n",sizeof(number));
   printf("char size    = %d \n",sizeof(name));
   printf("float size   = %d \n",sizeof(percentage));
   printf("double size  = %d \n",sizeof(d));
   return 0;
}


