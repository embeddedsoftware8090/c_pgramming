#include<stdio.h>
#include<stdlib.h> // allocation library
int main()
{
    int *p,i,number;
    printf("Enter the number:\n");
    scanf("%d",&number);

    p = malloc(sizeof(int)*number);
    printf("Enter the numbers\n");
    for ( i = 0; i < number; i++)
    scanf("%d",&p[i]);
    printf("---------------------------------\n");
    for ( i = 0; i <number; i++)
    printf("%d \n",p[i]);
    printf("\n");
    printf("size of = %d\n",sizeof(p));
    
}

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char *p ,i,n;
//     printf("Enter the n value \n");
//     scanf("%hhd",&n);
//     p = malloc(sizeof(char)*n);
//     for ( i = 0; i < n; i++)
//     scanf("%s",p);
//     for ( i = 0; i < n; i++)
//     printf("%s ",p[i]);
    
// }


/* #include<stdio.h>
#include<stdlib.h>
int main()
{
        char *p[5];
        int i;
        for(i=0;i<5;i++)
        p[i] = (char *)malloc(20*sizeof(char));

        printf("Enter the 5 strings\n");
        for(i=0;i<5;i++)
        scanf("%s",p[i]);

        for(i=0;i<5;i++)
        printf("%s\n",p[i]);

        for(i=0;i<5;i++)
        free(p[i]); // free memory else it has to be leak
}
*/