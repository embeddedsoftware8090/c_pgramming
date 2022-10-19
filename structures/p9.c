// #include<stdio.h>
// struct st
// {
//         int x;
//         char ch;
// };
// int main()
// {
//         struct st *p = {10,'A'};
//         printf("%d %c\n",p->x,p->ch);
// }


#include<stdio.h>
#include<stdlib.h>
struct st
{
        int x;
        char ch;
};
int main()
{
        struct st *p = (struct st *)malloc(sizeof(struct st)); // memory allocation in  struture
/*
        p->x = 10;
        p->ch = 'A';
*/
        printf("Enter the x,ch data\n");
        scanf("%d %c",&p->x,&p->ch);

        printf("%d  %c\n",p->x,p->ch);
        printf("%d  %c\n",(*p).x,(*p).ch);
}
