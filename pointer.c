P1.c

#include<stdio.h>
int main()
{
        int a = 10;
        int *ptr = &a;
        printf("*ptr = %d\n",*ptr);
        printf("  &a = %p\n",&a);
        printf("ptr  = %p\n",ptr);
return 0;

}

P2.c
#include <stdio.h>
int main()
{
    int var = 10;
    // pointer for var
    int *ptr2;
    // double pointer for ptr2
    int **ptr1;
    // storing address of var in ptr2
    ptr2 = &var;
    // Storing address of ptr2 in ptr1
    ptr1 = &ptr2;
    // Displaying value of var using
    // both single and double pointes
    printf("Value of var = %d\n", var );
    printf("Value of var using single pointer = %d\n", *ptr2 );
    printf("Value of var using double pointer = %d\n", **ptr1);

  return 0;
}

//Null pointer 
  #include <stdio.h>  
int main()  
{  
    int *ptr ;  
   printf("Address: %d", ptr); // printing the value of ptr.  
  printf("Value: %d", *ptr); // dereferencing the illegal pointer  
   return 0;  
 }

 Void pointer (any type)
#include <stdio.h>  
int main()  
{  
    void *ptr = NULL; //void pointer  
    int *p  = NULL;// integer pointer  
    char *cp = NULL;//character pointer  
    float *fp = NULL;//float pointer  
    printf("size of void pointer = %d\n\n",sizeof(ptr));  
    printf("size of integer pointer = %d\n\n",sizeof(p));  
    printf("size of character pointer = %d\n\n",sizeof(cp));  
    printf("size of float pointer = %d\n\n",sizeof(fp));  
    return 0;  
}  
//Wild pointer
(A pointer which has not been initialized to anything (not even NULL) is known as wild pointer)

#include<stdio.h>
int main()
{
    int *p;  /* wild pointer */
  
    int x = 10;
  
    // p is not a wild pointer now
    p = &x;
  
    return 0;
}
// Dangling pointer

#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
  
    // After below free call, ptr becomes a 
    // dangling pointer
    free(ptr); 
      
    // No more a dangling pointer
    ptr = NULL;
}
