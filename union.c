#include <stdio.h>
union unionJob // union decalration 
{
   //defining a union
   char name[32];
   float salary;
   int workerNo;
} uJob;

struct structJob // structure declaration 
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
   printf("size of union = %d bytes", sizeof(uJob));
   printf("\nsize of structure = %d bytes \n", sizeof(sJob));
   return 0;
}


// #include <stdio.h>
// #include <string.h>

// union Data {
//    int i;
//    float f;
//    char str[19]; // union always occupies 4 ,8,12,16,20,24,28,32.
// };

// int main( ) {

//    union Data size;

//    printf( "Memory size occupied by data : %d\n", sizeof(size));

// }


