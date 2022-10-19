
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int *p = (int *)malloc(5*sizeof(int));
        printf("p = %p\n",p);
        
	  p = (int *)malloc(5*sizeof(int));
        printf("p = %p\n",p);
        free(p);
}
