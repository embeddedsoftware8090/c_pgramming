// #include<stdio.h>
// int x = 10; //extern int x = 10; //extern definition
// int main()
//    {
//            extern int x; //extern declaration.
//            printf("x = %d\n",x);
//    }


// #include<stdio.h>
//  int main()
//    {
//            extern int x;  //extern declaration.
//            printf("x = %d\n",x);
//    }
//    int x = 10; //extern definition.


// #include<stdio.h>
// int main()
//    {
//            extern int x; //extern declaration.
//            printf("in main(), x = %d\n",x);
//            x = 30;
//            fun();
//    }


#include<stdio.h>
int main()
   {
           extern int x;  //extern declaration.
           printf("x = %d\n",x);
   }
