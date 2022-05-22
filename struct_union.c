Structure###################################################################################
P1.
 #include<stdio.h>
   struct student
   {
           int roll;
           char name[20];
           float marks;
   }s1 = {10,"aaa",99.5};//,s2 = {20,"bbb",65.6};
   int main()
   {
          printf("s1 data...\n");
          printf("roll - %d   %d\n",s1.roll,(&s1)->roll);
          printf("name - %s  %s\n",s1.name,(&s1)->name);
          printf("marks - %f  %f\n",s1.marks,(&s1)->marks);
  /*
          printf("s2 data...\n");
          printf("roll - %d   %d\n",s2.roll,(&s2)->roll);
          printf("name - %s  %s\n",s2.name,(&s2)->name);
          printf("marks - %f  %f\n",s2.marks,(&s2)->marks);*/
 }
P2.c
#include<stdio.h>
int main()
{
        struct st
        {
                int x;
                char ch;
                float f;
        };

        struct st s;
        printf("Enter the structure data 1)int 2)char 3)float\n");
        scanf("%d %c%f",&s.x,&s.ch,&s.f);

        printf("x - %d  ch - %c  f - %f\n",s.x,s.ch,s.f);
}
Typedef ##########################################################################################
P3.c

#include <stdio.h>
int main()
{
typedef unsigned int unit;
unit i,j;
i=10;
j=20;
printf("Value of i is :%d\n",i);
printf("Value of j is :%d\n",j);
return 0;
}

P4.c

#include <stdio.h>
#include <string.h>

struct Data {
   int i;
   float f;
   char str[20];
   };

int main( ) {

   struct Data data;

   printf( "Memory size occupied by data : %d\n", sizeof(data));

   return 0;
}


Union ###################################################################################################
P5.c

#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main( ) {

   union Data data;

   printf( "Memory size occupied by data : %d\n", sizeof(data));

   return 0;
}

P6.c

#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main( ) {

   union Data data;

   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);

   return 0;
}


Enum ##############################################################################################
P7.c

#include<stdio.h>

enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,
          Aug, Sep, Oct, Nov, Dec};

int main()
{
   int i;
   for (i=Jan; i<=Dec; i++)
      printf("%d\n ", i);

   return 0;
}
P8.c

#include <stdio.h>
enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};

int main()
{
    enum day d = thursday;

   printf("The day number stored in d is %d", d);
    return 0;
}


